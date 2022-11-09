// Diameter of tree
/*
f[v] longest path that starts with node v and ends in its subtree
g[v] longest path that starts with a node x in subtree of v, passes throughv and ends at another node y in its subtree

f[v] = 1 + max(f[u]) where u are child nodes of v
g[v] = 2 + sum of two child with max f[u]

*/
#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

vector<int> ar[N];
vector<int>f(N,0), g(N,0);
int d=0;
void dfs(int ver, int par){

	vector<int>childList;
	for(auto c:ar[ver]){
		if(c ^ par){
			dfs(c,ver);
			f[ver] = max(f[ver], 1 + f[c]);
			childList.push_back(f[c]);
		}
	}

	d = max(d, f[ver]);
	sort(childList.rbegin(), childList.rend());

	if(childList.size()>=2){
		g[ver] = 2 + childList[0] + childList[1];
		d = max(d, g[ver]);
	}
}

int main(){
	int n; cin>>n;
	for(int i=1;i<n;i++){
		int x,y; cin>>x>>y;
		ar[x].push_back(y); ar[y].push_back(x);
	}

	dfs(1,0); 
	cout<<d;
}