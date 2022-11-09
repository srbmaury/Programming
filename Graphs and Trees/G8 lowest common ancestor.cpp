#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N], par(N);
void dfs(int vertex, int parent = -1){
	par[vertex] = parent;
	for(int child : g[vertex]){
		if(child == parent) continue;
		dfs(child, vertex);
	}
}
vector<int> path(int v){
	vector<int>res;
	while(v != -1){
		res.push_back(v);
		v=par[v];
	}
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n-1; i++){
		int v1, v2;
		cin>>v1>>v2;

		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	dfs(1);
	int q; 
	cin>>q;
	while(q--){
		int a, b; 
		cin>>a>>b;
		vector<int>res1 = path(a);
		vector<int>res2 = path(b);

		int l =min(res1.size(),res2.size()), lca = -1;

		for(int i=0; i<l; i++){
			if(res1[i] == res2[i])
				lca = res1[i];
			else
				break;
		}
		cout<<lca<<" ";
	}
}