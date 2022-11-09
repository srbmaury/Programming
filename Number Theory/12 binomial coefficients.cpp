#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9+7;
int binExp(int a, int b, int M){
    int ans = 1;
    while(b){
        if(b&1) ans = (ans * 1LL * a) % M;
        
        a = (a * 1LL * a) % M;

        b >>= 1;
    }
    return ans;
}

int inv(int a, int M){
    return binExp(a, M-2, M);
}


// nCk
const int N = 1e6+10;
int fact[N];


int nCk(int n, int k, int M){
    return ((fact[n] * inv(fact[k], M) % M) * inv(fact[n-k], M)) % M;
}

signed main(){
    fact[0]=1;
    for(int i=1; i<N; i++){
        fact[i] = (fact[i-1] * 1LL * i) % M;
    }
	int t; cin>>t; 
    while(t--){
        int n,k; cin>>n>>k;
        cout<<nCk(n,k,M)%M<<'\n';
    }
}