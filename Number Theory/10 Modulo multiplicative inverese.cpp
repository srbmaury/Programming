// Modulo inverse of N, under modulo P exist if GCD(N, P) = 1
// 1. Using Fermat's little theorem (m must be prime and a & m must be coprime)
// 2. Using Extended Euclid Algorithm

// a^(m-1) ≡ 1 mod m
// a^(m-2) ≡ a^-1 mod m

// TC: log(m)
#include<bits/stdc++.h>
using namespace std;
int Pow(int a, int n, long long P=1e18){
	int res = 1;
	while(n){
		if(n&1) res=(res*a)%P,n--;
		else a=(a*a)%P,n/=2;
	}
	return res;
}
int main(){
	int t, a, b, m;
	cin>>t;
	while(t--){
		cin>>a>>m;

		// a^-1 = Pow(a,m-2)
		cout<<Pow(a, m-2, m);

	}
}