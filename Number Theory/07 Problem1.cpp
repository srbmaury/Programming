//https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem#include <bits/stdc++.h>

#include<bits/stdc++.h>
using namespace std;
#define int                     long long
#define rep(i,k,n)              for(long long i=k; i<n; i++)
#define mod                     1000000007LL
#define pf                      first
#define ps                      second

#define N 101
int a[N][N], I[N][N];
void mul(int A[][N], int B[][N], int dim){
    int res[dim+1][dim+1];
    rep(i,0,dim){
        rep(j,0,dim){
            res[i][j]=0;
            rep(k,0,dim) {res[i][j] += A[i][k]*B[k][j]; res[i][j]%=mod;}
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
void f(int n){
    int dim = 2;

    a[0][0]=0; a[0][1]=a[1][0]=a[1][1]=1;
    Pow(a, dim, n);
}
void solve(){
    int ax,b,n; cin>>ax>>b>>n;
    f(n);
    cout<<(ax*a[0][0]+b*a[1][0])%mod;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long T; cin>>T; while(T--)
    solve(), cout<<'\n';
    return 0;
}

