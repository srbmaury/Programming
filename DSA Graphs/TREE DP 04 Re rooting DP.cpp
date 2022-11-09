// For a tree with n nodes find subtree sum of each node (Tree distances II CSES)

// (Tree with maximum cost cf) (maximum white subtree cf) (Tree painting)

#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 2e5+10;
vector<int>g[N], res(N,0), subSize(N,0), subDist(N,0);
int n;
void dfs1(int node, int par){
	subSize[node] = 1;

	for(auto child : g[node]){
		if(child ^ par){
			dfs1(child, node);
			subSize[node] += subSize[child];
			subDist[node] += subSize[child] + subDist[child];
		}
	}
}
void dfs(int node, int par){
	res[node] = res[par] - subSize[node] - subDist[node] + n - subSize[node] + subDist[node];

	for(auto child : g[node]){
		if(child ^ par){
			dfs(child, node);
		}
	}
}
void solve(){
	int a,b; cin>>n;
	rep(i,1,n) cin>>a>>b, g[a].pb(b), g[b].pb(a);

	dfs1(1, -1);
	res[1] = subDist[1];

	for(auto child : g[1])
		dfs(child, 1);

	rep(i,1,n+1) cout<<res[i]<<' '; 

}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--) solve(), cout<<'\n';
}
