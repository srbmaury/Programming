// https://www.codechef.com/MARCH221B/problems/MAXMEXPATH

#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e5+10;
vector<vector<int>>g;
vector<int>val;
vector<int>mex(N, 0);
bool k = false;
unordered_set<int>st;
void dfs(int ver, int par, int m){

	mex[val[ver]]++;
	if(val[ver] < m){
		st.insert(val[ver]);
	}
	for(auto child:g[ver]){
		if(child == par) continue;
		dfs(child, ver, m);
	}

	if(st.size()==m) k = true;

	mex[val[ver]]--;

	if(mex[val[ver]]==0 and st.find(val[ver]) != st.end()){
		st.erase(val[ver]);
	}

}
bool found(int mid, int n){
	st.clear();
	mex.clear();
	k = false;
	dfs(1, 0, mid);
	return k;
}
void solve(){
	g.clear();
	val.clear();
	int n; cin>>n;
	g.resize(n+1);
	val.resize(n+1);

	rep(i,1,n+1) cin>>val[i];
	rep(i,0,n-1){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}


	int lo = 1, hi = n+2;
	int ans = 0;
	while(lo<=hi){
		int mid = lo + (hi-lo)/2;
		if(found(mid, n)){
			ans = max(ans, mid);
			lo = mid+1;
		}else{
			hi = mid-1;
		}
	}
	cout<<ans;
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--) solve(), cout<<'\n';
}
