// Efficient way to find phi(n) from 1 to n, n<=1e6

// Using sieve

// at index i put (i)/p *(p-1) p is prime divisor

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

int main(){
	phi(1000000);
}