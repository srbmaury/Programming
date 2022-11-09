// Given 2 nodes find whether one node lies in the subtree of another
#include<bits/stdc++.h>
using namespace std;

int timer = 1;
const int N = 1e5+10;
vector<int>g[N], in(N), out(N), vis(N, 0);
bool dfs(int v){
	vis[v] = 1;
	in[v] = timer++;

	for(auto child : g[v]){
		if(!vis[child]){
			dfs(child);
		}
	}
	out[v] = timer++;
}

signed main(){
	
}