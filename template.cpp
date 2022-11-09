/*AUTHOR: Saurabh Maurya COLLEGE : IIT-BHU*/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using ll = long long;

#define rep(i,b,e)              for (__typeof(e)i=(b)-((b)>(e));i!=(e)-((b)>(e));i+=1-2*((b)>(e)))
#define fo(x,v)                 for(auto &x:v)

#define vec                     vector<ll>
#define pii                     pair<ll,ll>
#define maps                    map<ll,ll>

#define all(x)                  x.begin(), x.end()
#define rall(x)                 x.rbegin(),x.rend()  

#define M                       1000000007LL
#define M2                      998244353LL
#define pi                      3.14159265358979323846264338327950288419716939937510

#define pb                      push_back
#define eb                      emplace_back
#define PB                      pop_back

#define pf                      first
#define ps                      second

#define minm(x)                 *min_element(x.begin(),x.end())
#define maxm(x)                 *max_element(x.begin(),x.end())

#define lb                      lower_bound
#define ub                      upper_bound

#define in                      insert
#define sz                      size()

#define bpc                     __builtin_popcountll
#define bffs                    __builtin_ffsll    // least pos of set bit 0:0, 1:1, 2:2, 3:1, 4:3
#define clz                     __builtin_clzll    // count leading 0's
#define ctz                     __builtin_ctz      // count trailing zeroes


#define out(x)                  {cout<<x; return;}
#define outp(x)                 {cout<<x.pf<<" "<<x.ps<<'\n';}
#define yesno(condition)        {(condition) ? cout<<"YES" : cout<<"NO";}

#define decToBin(n)             bitset<64> (n).to_string()

#define SET(n)                  fixed<<setprecision(n)

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x)
#define deb(x)
#define deb2(x,y)
#define deb3(x,y,z)
#endif

/**********************************************************************************************/

template<typename T>istream&operator>>(istream&is,vector<T>&v){for(auto&i:v)is>>i;return is;}
template<typename T>ostream&operator<<(ostream&os,vector<T>v){for(auto&i:v)os<<i<<' ';return os;}

template<typename T,typename U>istream&operator>>(istream& is,pair<T,U>&p){is>>p.first>>p.second;return is;}
template<typename T,typename U>ostream&operator<<(ostream& os,pair<T,U>p){os<<p.first<<' '<<p.second<<' ';return os;} 

template <typename T> using pbds = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// ordered_set ->  find_by_order(x)<itr, x being 0-indexed>; order_of_key(x)<count, strictly less>

/**********************************************************************************************/
ll LOG(ll n, ll x){ll ans=-1;while(n>0){ans++,n/=x;}return ans;}

ll Ceil(ll a, ll b){if(a%b==0 || a<0)return a/b;return a/b+1;}


ll nCr(ll n,ll r){ll res=1;if(n<r)return -1;r=min(r,n-r);
rep(i,0,r){res*=(n-i);res/=(i+1);}return res;}
 
ll nPr(ll n,ll r){ll res=1;if(n<r)return -1;
rep(i,0,r)res*=(n-i);return res;} 

bool isPrime(ll n){ if(n<=1)return false; if(n<=3)return true; if(n%2==0||n%3==0)
return false; for(ll i=5;i*i<=n;i=i+6) if(n%i==0||n%(i+2)==0) return false; return true;}

/**********************************************************************************************/

ll exp(ll a, ll b, ll m=M){
    ll ans = 1; 
    while (b){
        if (b & 1)
            ans = ans * a % m; 
        b /= 2; 
        a = a * a % m;
    } return ans;
}

ll Pow(ll a, ll b){
    ll ans = 1; 
    while (b){
        if (b & 1)ans = ans * a; 
        b /= 2; 
        a = a * a;
    } 
    return ans;
}
ll inverse(ll a, ll p=M){
    return exp(a, p - 2, p);
}

/**********************************************************************************************/

// ll fact[200001],invfact[200001], inv[200001];
// void F()
// {
//     fact[0]=fact[1]=1;
//     ll i=2;
//     while(i<=200000){
//         fact[i]= (fact[i-1] * i) % M;
//         i++;
//     }
//     i--;
//     invfact[i] = inverse(fact[i]);
//     for(i--;i>=0;i--){ 
//         inv[i] = inverse(i);
//         invfact[i]=((i+1)*invfact[i+1]) % M; 
//     }
// }

// ll ncr(ll n, ll r, ll p=M){
//     if (r == 0) 
//         return 1; 
//     return ((fact[n] * invfact[r]) % p * invfact[n - r]) % p;
// }

/**********************************************************************************************/

// ll is_prime[10000010];
// void SoE(){
//     is_prime[1]=1;
//     for(ll i=2;i*i<=10000010; i++){
//         if(is_prime[i]==0){
//         ll j=i*i;
//         while(j<10000010)
//             is_prime[j]=1, j+=i;
//         }
//     }
// }
 
/**********************************************************************************************/

const ll N = 1e5+10;
// vector<int>g[N], vis(N,0);
// vector<vector<ll>>g;

vector<pii>moves = {
    {1,0}, {-1,0}, {0,-1}, {0,1},
    // {1,1}, {1,-1}, {-1,1}, {-1,-1}
};

/**********************************************************************************************/

// (A/B) % M = ((A%M) * (inverse(B)%M)) %M

/****** START CODE HERE **********/
void love(int T){

    


   
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    
    // SoE();

    int T; cin>>T; 
    for(int i=1; i<=T; i++){
        //cout<<"Case #"<<i<<": ";
        love(i), cout<<'\n';
    }
    return 0;
}