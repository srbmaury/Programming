#include<bits/stdc++.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
using ll = long long;
#define pb push_back
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;


void Solve()
{
    int n; cin>>n;
    ll a[n], ans=0; rep(i, 0, n) cin>>a[i];
 
    ordered_set<pair<int,int>>s;
 
    for(int i=n-1; i>=0; i--)
    {
        pair<int,int> p={a[i], -i};
        ans+=s.order_of_key(p);
        s.insert(p);
    }
    cout<<ans<<'\n';
}


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t; cin>>t; while(t--)Solve();


    return 0;
}