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
#define M                     1000000007LL
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

void _print(ll t){cerr << t;}void _print(string t){cerr << t;}void _print(char t){cerr << t;}
void _print(lld t){cerr << t;}void _print(double t){cerr << t;}void _print(ull t){cerr << t;}
template <class T, class V>void _print(pair <T, V> p);template <class T>void _print(vector <T> v);template <class T> void 
_print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template 
<class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.pf); cerr << ","; _print(p.ps); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
maps f;
 
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;
 
    f[n] = (n & 1)? (fib(k)%M*fib(k)%M + fib(k-1)%M*fib(k-1)%M)
           : (2LL*fib(k-1)%M + fib(k))%M*fib(k)%M;
    f[n]%=M;
    return f[n];
}
 
int calculateSum(int n)
{
    return fib(n+2) - 1;
}
void love(){

    int n,m; cin>>n>>m;
    int k = calculateSum(m)-calculateSum(n-1);
    if(k<0) {cout<<(k+M)%M; return;}
    cout<<k%M;

}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    
    long long T; cin>>T; while(T--)
    love(), cout<<'\n';
    return 0;
}