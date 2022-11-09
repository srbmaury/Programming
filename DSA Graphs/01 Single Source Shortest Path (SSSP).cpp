
#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;

const int N = 1e5+10;
vector<int>g[N], vis(N,0), dist(N, 0); 

void dfs(int v, int d=0){
	vis[v]=1;
	dist[v]=d;
	for(auto child : g[v]){
		if(!vis[child])
			dfs(child, dist[v]+1);
	}
}

signed main(){
	
}