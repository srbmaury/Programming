#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e5+10;
vector<int>ar[N];
int in[N], low[N], vis[N];
int timer = 0;
void dfs(int node, int par){
	vis[node] = 1;
	in[node] = low[node] = timer;
	timer++;

	for(int child : ar[node]){
		if(child == par) continue;
		if(vis[child]){
			// This edge node - child is back edge
			low[node] = min(low[node], in[child]); 

		}else{
			// This edge node - child is forward edge
			dfs(child, node);

			if(low[child] > in[node]){
				cout<<node<<"-"<<child<<" is a bridge\n";
			}

			low[node] = min(low[node], low[child]); 

		}
	}
	// if low time of child is less than in time of parent
	// the edge between them is not a bridge

}
void solve(){
	int n,m,x,y;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		ar[x].pb(y); ar[y].pb(x);
	}
	dfs(1,0);
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--) solve(), cout<<'\n';
}
