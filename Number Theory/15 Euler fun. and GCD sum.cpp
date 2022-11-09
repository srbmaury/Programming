/*
 N
 Σ GCD(i,N)
i=1
*/
// O(Q * sqrt(N))  for Q queries

// Number of integers having GCD d with N = number of integers Coprime with N/d
#include<bits/stdc++.h>
using namespace std;
int phi[1000001];
void init(int maxN){
	for(int i=1;i<=maxN;i++)phi[i]=i; 
	for(int i=2;i<=maxN;i++){
		if(phi[i]==i){
			for(int j=i;j<=maxN;j+=i){
				phi[j] /= i;
				phi[j] *= (i-1);
			}
		}
	}
}

int getCount(int d, int N){
	return phi[N/d];
}

int main(){
	int q,n;
	cin>>q;
	init(1000000);
	while(q--){
		cin>>n;
		int res=0;
		for(int i=1; i*i<=n; i++){
			if(n%i==0){
				int d1 = i;
				int d2 = n/i;

				res += d1 * getCount(d1,n);

				if(d1 != d2)
				res += d2 * getCount(d2,n);
			}
		}
		cout<<res<<'\n';
	}
}