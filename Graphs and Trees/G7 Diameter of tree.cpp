// Calculating depth and height of each node of tree

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N];
int depth[N],height[N];
void dfs(int vertex, int parent = -1){
	// cout<<vertex<<" ";
	for(int child : g[vertex]){
		if(child == parent) continue;
		depth[child] = depth[vertex]+1;
		dfs(child, vertex);
		height[vertex] = max(height[vertex],height[child]+1);
	}
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
	int vertex1=0,vertex2=0,maxDepth=0,maxDepth2=0;
	for(int i=1; i<=n; i++){
		if(depth[i] > maxDepth){
			maxDepth=depth[i]; 
			vertex1=i;
		}
	}
	for(int i=1; i<=n; i++) depth[i]=0;
	dfs(vertex1);
	for(int i=1; i<=n; i++){
		if(depth[i] > maxDepth2){
			maxDepth2=depth[i]; 
			vertex2=i;
		}
	}
	cout<<maxDepth2<<endl;
	// cout<<vertex1<<" "<<vertex2<<" "<<maxDepth<<" "<<maxDepth2<<endl;
}