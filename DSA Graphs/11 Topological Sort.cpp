#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e5+10;
vector<int>g[N];
vector<int>vis(N,0), in(N,0);
vector<int>topological_order;

queue<int>q;
void topological_Sort(int n){

    // priority_queue<int, vector<int>, greater<int>>q; 
    // to find minimum lexicographical order

	rep(i,1,n+1) if(in[i]==0) q.push(i);

	while(!q.empty()){ 
		int curr = q.front();

		topological_order.pb(curr);
		q.pop();

		for(auto node:g[curr]){
			in[node]--;
			if(in[node]==0)  
				q.push(node);
		}
	}
}
void solve(){
	int n,m; cin>>n>>m;
	while(m--){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		in[y]++;
	}

	topological_Sort(n);

	for(auto &x:topological_order)cout<<x<<' ';
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--) solve(), cout<<'\n';
}
