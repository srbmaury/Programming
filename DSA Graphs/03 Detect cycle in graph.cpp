#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int>g[N], vis(N,0);

//If some child of a node is its ancestor 
// but not its parent node 


bool dfs(int node, int par = 0, bool isCycle = false){
	vis[node] = 1;
	for(auto child : g[node]){
		if(!vis[child]){
			if(dfs(child, node) == true)
				return true;
		}
		else if(child != par) 
			return true;
	}
	return false;
}


int main(){
	
}
