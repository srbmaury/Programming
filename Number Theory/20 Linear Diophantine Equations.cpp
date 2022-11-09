/*AUTHOR: Srbmaury
COLLEGE : IIT-BHU*/


// To check whether a solution exists or not
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

const ll N = 1e7+10;                  // For Sieve is_prime[];
const ll M = 1e9+7;
double pi=3.141592653;


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

bool isPrime(ll n){ if(n<=1)return false; if(n<=3)return true; if(n%2==0||n%3==0)return false; 
for(ll i=5;i*i<=n;i=i+6) if(n%i==0||n%(i+2)==0)return false; return true; }

vector<bool> is_prime(N);
void seive(){is_prime[0]=is_prime[1]=true;rep(i,2,N){if(is_prime[i]==false){for(ll j=2*i;j<N;j+=i){is_prime[j]=true;}}}}

multiset<ll> primeFactor(ll N){ multiset<ll>mst; for(ll i=2;i*i<=N;i++) { if(N%i==0) { ll cnt=0;
while(N%i == 0) cnt++, N/=i,mst.in(i); }} if(N>1) mst.in(N); return mst;}


// (a^b)%M    a <=10^9, b<=10^18, M<=10^9 
ll Pow(ll a,ll b, ll M=1e18){ll ans=1;while(b){if(b&1)ans=(ans*a)%M;a=(a*a)%M;b>>=1;}return ans;}

//   For large a and M
ll binMultiply(ll a,ll b){ll ans=0;while(b>0){if(b&1){ans=(ans+a)%M;}a=(a+a)%M;b>>=1;}return ans;}
ll binExp(ll a,ll b){ll ans=1;while(b){if(b&1)ans=binMultiply(ans,a);a=binMultiply(a,a);b>>=1;}return ans;}

ll ar[1000001];
void sieveforF(){ll maxN = 1000000;rep(i,1,maxN+1)ar[i]=-1;rep(i,2,maxN+1)if(ar[i]==-1){
for(ll j=i;j<=maxN;j+=i){if(ar[j] == -1)ar[j] = i;}}}
void primeF(ll n){sieveforF();while(n>1){cout<<ar[n]<<' ';n/=ar[n];}}

pii fib(ll n){if(!n)return{0,1};auto p=fib(n>>1);ll c=p.pf*(2*p.ps-p.pf);
ll d=p.pf*p.pf+p.ps*p.ps;if(n&1)return {d, c + d};else return {c, d};}

// ll gcd(ll a,ll b){return((b==0)?a:gcd(b,a%b));}

ll numFactor(ll N){ll res=1;for(ll i=2;i*i<=N;i++){if(N%i==0){ll cnt=0;while(N%i==0)cnt++,N/=i;
res*=(cnt + 1);}}if(N>1)res*=2;return res;}


ll inv(ll a, ll M){return Pow(a, M-2, M);}
ll fact[N];
void Fact(){fact[0]=1;rep(i,1,N){fact[i]=(fact[i-1]*i)%M;}}
ll nCk(ll n, ll k, ll M=1e9+7){Fact();return ((fact[n] * inv(fact[k], M) % M) * inv(fact[n-k], M)) % M;}


ll nCr(ll n,ll r){ll res=1;if(n<r)return -1;r=min(r,n-r);
rep(i,0,r){res*=(n-i);res/=(i+1);}return res;}

ll nPr(ll n,ll r){ll res=1;if(n<r)return -1;
rep(i,0,r)res*=(n-i);return res;} 

int XORfrom1ton(int n){int k,p=(n%4);if(p==0)k=n;if(p==1)k=1;
if(p==2)k=(n+1);if(p==3)k=0; return k;} 

// (p/q)%mod
ll div_modulo(ll p,ll q){ll expo;expo=mod-2;while(expo){
if(expo&1){p=(p*q)%mod;}q=(q*q)%mod;expo >>= 1;}return p;}

int mostSignificantDigit(ll N){double K=log10(N); K=K-floor(K); return pow(10,K);}
void shift_solution(int & x, int & y, int a, int b, int cnt) {
    x += cnt * b;
    y -= cnt * a;
}
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

void love(int i){
    int a,b,c; cin>>a>>b>>c;
    int g = __gcd(a,b); if(c%g) {cout<<"Case "<<i<<": "<<"No\n";return;}

    int x0=a*(c/g),y0=b*(c/g);

    bool ff=find_any_solution(a,b,c,x0,y0,g);
    if(ff) cout<<"Case "<<i<<": "<<"Yes\n";
    else cout<<"Case "<<i<<": "<<"No\n";
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    
    ll T; cin>>T; 
    for(int i=1;i<=T;i++)
    love(i);
    return 0;
}
