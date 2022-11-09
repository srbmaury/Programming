// Precomputation using DFS
// Subtree sum queries
// Even odd counts in subtree

// subtree operations are performed while traversing tree upwards

/** Given Q Queries, Q <= 10^5
 *  In each query given V,
 * Print subtree sum of V, Number of even numbers
 * in subtree of V
 **/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

// int value[N];       if value of each node is given
vector<int> g[N];

int subtree_sum[N];
int even_count[N];

void dfs(int vertex, int parent = -1){
	subtree_sum[vertex] += vertex;
	if(vertex%2 == 0){
		even_count[vertex] += 1;
	}
	// subtree_sum[vertex] += value[vertex];
	for(int child : g[vertex]){
		if(child == parent) continue;
		dfs(child, vertex);
		subtree_sum[vertex] += subtree_sum[child];
		even_count[vertex] += even_count[child];
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
	
	int q; 
	cin>>q;
	while(q--){
		int v; 
		cin>>v;
		cout<<subtree_sum[v]<<" "<<even_count[v]<<"\n";
	}
}