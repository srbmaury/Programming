// prime numbers in range L to R (L,r<=10^12) R-L+1<=10^6

// Generate all prime numbers upto sqrt(R)
// create an array of size R-L+1 and set all elements to be 0 (0:prime)
// for each prime p in range 2 to sqrt(R) 
// for every multiple m of p in range L to R, mark index m-L as 1 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<bool> isPrime(N,1);
vector<int>primes;
void seive(){
	isPrime[0]=isPrime[1]= false;
    for(int i=2; i<N; i++){
    	if(isPrime[i] == true){
    		for(int j=2*i; j<N; j+=i){
    			isPrime[j] = false;
    		}
    	}
    }
    for(int i=2; i<=100000; i++){
    	if(isPrime[i])
    		primes.push_back(i);
    }
}
void init(int l, int r){
    if(l == 1) l++;
    int maxN = r - l + 1;
    vector<int>ar(maxN,0);
    for(int p:primes){
        if(p*p <= r){
            int i= (l/p)*p;
            if(i<l) i+=p;
            for(;i<=r;i+=p){
                if(i != p) ar[i-l]=1;
            }
        }
    }
    for(int i=0; i<maxN; i++) 
        if(ar[i]==0)
            cout<<l+i<<'\n';
}
int main(){
	seive();
    int t,L,R;
    cin>>t;
    while(t--){
        cin>>L>>R;
        init(L,R);
        cout<<"\n";
    }
}