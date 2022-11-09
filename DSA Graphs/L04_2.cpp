// To check whether given graph is a tree or not

#include<bits/stdc++.h>
#define pb(a) push_back(a)
using namespace std;

vector<int>ar[100001];
int vis[100001];

void dfs(int node){
	vis[node] = 1;
	for(int child : ar[node])
		if(!vis[child])
			dfs(child);
}

int main(){
	int n,m,a,b;
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		cin>>a>>b;
		ar[a].pb(b) , ar[b].pb(a);
	}

	int cc_count = 0;
	for(int i=1; i<=n; i++)
		if(vis[i]==0)
			dfs(i), cc_count++;

	if(cc_count == 1 && m==n-1)
		cout<<"YES";
	else cout<<"NO";
}