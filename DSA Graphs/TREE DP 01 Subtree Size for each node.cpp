#include<bits/stdc++.h>
const int N = 1e5+10;
int sz[N];
std::vector<int>g[N];
void dfs(int n, int par){
	sz[n] = 1;
	for(auto x:g[n]){
		if(x != par){
			dfs(x, n);
			sz[n] += sz[x];
		}
	}
}