#include <bits/stdc++.h>          
using namespace std;
const int N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> lp(N,0), hp(N,0);      // lowest and highest prime factors
void seive(){                     // O(N log(log(N)))
	isPrime[0]=isPrime[1]= false;
    for(int i=2; i<N; i++){
    	if(isPrime[i] == true){
    		lp[i] = hp[i] = i;
    		for(int j=2*i; j<N; j+=i){
    			isPrime[j] = false;
    			hp[j] = i;
    			if(lp[j] == 0) 
    				lp[j] = i;
    		}
    	}
    }
}

vector<int> primeFactors(int num){
	vector<int> prime_factors;
	while(num > 1){
		int prime_factor = lp[num];
		while(num % prime_factor == 0){
			num /= prime_factor;
			prime_factors.push_back(prime_factor);
		}
	}
	return prime_factors;
}

map<int,int> primeFactorisation(int num){
	map<int,int> prime_factors;
	while(num > 1){
		int prime_factor = lp[num];
		while(num % prime_factor == 0){
			num /= prime_factor;
			prime_factors[prime_factor]++;
		}
	}
	return prime_factors;
}

int main(){
	seive();
	cout<<isPrime[70]<<endl;
	cout<<lp[70]<<" "<<hp[70]<<endl;

	vector<int> primefactorsOfn = primeFactors(30);
	for(auto x:primefactorsOfn) cout<<x<<" "; cout<<endl;


	map<int,int> factorisation = primeFactorisation(70);

	for(auto it = factorisation.begin(); it != factorisation.end(); it++){
		cout<<it->first<<"^"<<it->second;
		if(it != --factorisation.end()) cout<<" * ";
	}

	cout<<endl;
	cout<<sumOfDivisors(70);

    return 0;
}
