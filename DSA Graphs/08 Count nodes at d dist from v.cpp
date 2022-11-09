#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N];
vector<int>visited(N,0), lvl(N,0), ct(N,0);
queue<int>q;
void bfs(int vertex){
	q.push(vertex);
	visited[vertex] = 1;

	while(!q.empty()){
		int curr_ver = q.front();
		// cout<<curr_ver<<' ';
		for(auto child:g[curr_ver]){
			if(!visited[child]){
				q.push(child);
				visited[child]=1;
				lvl[child] = lvl[curr_ver] + 1;
				ct[lvl[child]]++;
			}
		}
		q.pop();
	}
	// O(V+E)
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int v1, v2;
		cin>>v1>>v2;

		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	int q; cin>>q;
	while(q--){
		for(int i=0;i<=n;i++) 
			visited[i]=lvl[i]=ct[i]=0;
		int v,d;cin>>v>>d;
		bfs(v);
		cout<<ct[d]<<'\n';
	}
	bfs(1);
}