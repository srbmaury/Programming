
#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
vector<int>visited(N,0), lvl(N,0);

queue<int>q;

void bfs(int vertex){
	q.push(vertex);
	visited[vertex] = 1;

	while(!q.empty()){
		int curr_ver = q.front();
		cout<<curr_ver<<' ';
		for(auto child:g[curr_ver]){
			if(!visited[child]){
				q.push(child);
				visited[child]=1;
				lvl[child] = lvl[curr_ver] + 1;
			}
		}
		q.pop();
	}
	// O(V+E)
}
void solve(){
	int n,m; cin>>n>>m;
	rep(i,0,m){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}

	bfs(1);
}
signed main(){
	int t=1; 
	cin>>t;
	while(t--)
		solve(), cout<<'\n';
}