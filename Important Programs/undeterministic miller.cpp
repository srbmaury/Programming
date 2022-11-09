/*AUTHOR: Srbmaury
COLLEGE : IIT-BHU*/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define int                     long long
#define rep(i,k,n)              for(long long i=k; i<n; i++)
#define repb(i,k,n)             for(long long i=k; i>=n; i--)
#define fo(x,v)                 for(auto &x:v)
#define vec                     vector<long long>
#define all(x)                  x.begin(), x.end()
#define pii                     pair<long long,long long>
#define maps                    map<long long,long long>
#define mod                     1000000007LL
#define fp                      push_front
#define pb                      push_back
#define PB                      pop_back
#define pf                      first
#define ps                      second
#define minm(x)                 *min_element(x.begin(),x.end())
#define maxm(x)                 *max_element(x.begin(),x.end())
#define lb                      lower_bound
#define ub                      upper_bound
#define SET(n)                  fixed<<setprecision(n)
#define bpc                     __builtin_popcountll
#define in                      insert
#define sz                      size()
#define out(x)                  {cout<<x; return;}
#define outp(x)                 {cout<<x.pf<<" "<<x.ps<<'\n';}
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
#define ll uint64_t
multiset<ll> primeFactor(ll N){ multiset<ll>mst; for(ll i=2;i*i<=N;i++) { if(N%i==0) { ll cnt=0;
while(N%i == 0) cnt++, N/=i;cout<<i<<"^"<<cnt<<' '; }} if(N>1) cout<<N<<"^1"; return mst;}
void love(){


   ll n; cin>>n; if(n==0) exit(0);
   primeFactor(n);  

}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    
    while(true)
    love(), cout<<'\n';
    return 0;
}