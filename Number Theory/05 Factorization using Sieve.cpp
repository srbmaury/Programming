#include<bits/stdc++.h>
using namespace std;

int ar[1000001];
// Stores lowest prime factor at each position
void sieve(){
	int maxN = 1000000;
	for(int i=1;i<=maxN;i++) ar[i]=-1;
	for(int i=2;i<=maxN;i++){
		if(ar[i]==-1){
			for(int j=i;j<=maxN;j+=i){
				if(ar[j] == -1)
					ar[j] = i;
			}
		}
	}
}

void primeFactor(int n){
	sieve();
	while(n>1){
		cout<<ar[n]<<' ';
		n/=ar[n];
		
	}
}


int main(){
	int n; cin>>n;
	primeFactor(n);
}