// https://leetcode.com/problems/network-delay-time/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<int,int>>g[N];
void dijkstra(int source){
	vector<int>vis(N,0);
	vector<int>dist(N, INF);

	set<pair<int,int>>st;

	st.insert({0,source});
	dist[source] = 0;

	while(st.size()>0){
		auto node = *st.begin();
		int v = node.second;
		st.erase(st.begin());
		if(vis[v]) continue; 
		vis[v] = 1;
		for(auto child:g[v]){
			int child_v = child.first;
			int wt = child.second;
			if(dist[v] + wt < dist[child_v]){
				dist[child_v] = dist[v] + wt;
				st.insert({dist[child_v], child_v});
			}
		}
	}
}

signed main(){

	int n,m; cin>>n>>m;
	for(int i=0; i<m; i++){
		int x,y,wt; cin>>x>>y>>wt;
		g[x].push_back({y,wt});
	}
}