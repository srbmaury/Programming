#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N], vis(N,0), col(N,0);


// A graph with a cycle of odd length 
// it can never be bipartite
bool dfs(int v, int c, bool isBiaprtite = true){
	vis[v] = 1;
	col[v] = c;
	for(auto child : g[v]){
		if(!vis[child]){
			if(dfs(child, c^1) == false)
				return false;
			// dfs(child, c^1, isBiaprtite); // if we want to travel all nodes 
		}
		else if(col[v] == col[child])
			return false;
			// isBiaprtite = false;    // if we want to travel all nodes 
	}
	return true;
}

int main(){
	
}
