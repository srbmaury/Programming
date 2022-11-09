// https://www.codechef.com/submit/GCDQ
#include <bits/stdc++.h>
using namespace std;
#define int                     long long
#define rep(i,k,n)              for(long long i=k; i<n; i++)
#define repb(i,k,n)             for(long long i=k; i>=n; i--)
int gcd(int a, int b){
    return ((b==0)?a:gcd(b,a%b));
}
void solve(){
    int n,q; cin>>n>>q;

    int a[n]; rep(i,0,n)cin>>a[i];
    int pre[n],suf[n];
    pre[0]=a[0]; suf[n-1]=a[n-1]; 
    rep(i,1,n) pre[i]=gcd(pre[i-1],a[i]);
    repb(i,n-2,0) suf[i]=gcd(suf[i+1],a[i]);

    while(q--){
        int l,r; cin>>l>>r;
        if(l>1 and r<n)
            cout<<gcd(pre[l-2],suf[r]);
        else if(r==n)
            cout<<pre[l-2];
        else 
            cout<<suf[r];
        cout<<'\n';
    }
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long T; cin>>T; while(T--)
    solve(), cout<<'\n';
    return 0;
}