// Given a matrix A, and an integer N, calculate A^N
// Brute Force - Time complexity = O(M^3*N)

// Optimised TC = O(M^3* log N) Binary Exponentiation

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define N 101
int a[N][N], I[N][N];
void mul(int A[][N], int B[][N], int dim){
	int res[dim+1][dim+1];
	rep(i,0,dim){
		rep(j,0,dim){
			res[i][j]=0;
			rep(k,0,dim) {res[i][j] += A[i][k]*B[k][j];}
		}
	}
	rep(i,0,dim) rep(j,0,dim) A[i][j] = res[i][j];
}
void Pow(int A[][N], int dim, int n){
	rep(i,0,dim) rep(j,0,dim)
		((i==j)?I[i][j]=1:I[i][j]=0); 
	while(n){
		if(n&1) 
			mul(I, A, dim), n--;
		else
			mul(A, A, dim),n/=2;
	}
	rep(i,0,dim) rep(j,0,dim) A[i][j] = I[i][j];
}
void prinMat(int A[][N], int dim){
	rep(i,0,dim){rep(j,0,dim)cout<<A[i][j]<<' '; cout<<'\n';}
}
signed main(){
	int t, dim, n;
	cin>>t;
	while(t--){
		cin>>dim>>n;
		rep(i,0,dim) rep(j,0,dim) cin>>a[i][j];

		Pow(a, dim, n);
		prinMat(a, dim);
	}
}