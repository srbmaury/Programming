#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int INF = 1e12;
const int N = 1e5+10;
vector<int>isPrime(N,1), primes;
// vector<pair<int,int>>g[N];
// void dijkstra(int source, int dest){
// 	vector<int>vis(N,0);
// 	vector<int>dist(N, INF);

// 	set<pair<int,int>>st;

// 	st.insert({0,source});
// 	dist[source] = 0;

// 	while(st.size()>0){
// 		auto node = *st.begin();
// 		int v = node.second;
// 		st.erase(st.begin());
// 		if(vis[v]) continue; 
// 		vis[v] = 1;
// 		for(auto child:g[v]){
// 			int child_v = child.first;
// 			int wt = child.second;
// 			if(dist[v] + wt < dist[child_v]){
// 				dist[child_v] = dist[v] + wt;
// 				st.insert({dist[child_v], child_v});
// 			}
// 		}
// 	}
// 	cout<<dist[dest]<<'\n';
// }
void sieve(){
	isPrime[1] = isPrime[0] = 0;
	for(int i=2; i<N; i++){
		if(isPrime[i]){
			for(int j=i; j<N; j+=i) isPrime[j] = 0;
			if(i>=1000 and i<=9999) primes.pb(i);
		}
	}
}

vector<int> g[N];
queue<int>q;
void bfs(int vertex, int dest){
	vector<int>visited(N,0), lvl(N,0);
	q.push(vertex);
	visited[vertex] = 1;

	while(!q.empty()){
		int curr_ver = q.front();
		// cout<<curr_ver<<' ';
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
	cout<<lvl[dest]<<'\n';
}
void solve(){int ct=0;
	for(int i=0; i<1061; i++){
		for(int j=i+1; j<1061; j++){
			string a = to_string(primes[i]), b= to_string(primes[j]);
			int ct=0;
			rep(i,0,4) ct+=(a[i]!=b[i]);

			if(ct==1){
				// g[primes[i]].pb({primes[j],1});
				// g[primes[j]].pb({primes[i],1});

				g[primes[i]].pb(primes[j]);
				g[primes[j]].pb(primes[i]);
			}
		}
	}
	int q;cin>>q;
	while(q--){
		int x,y; cin>>x>>y;
		// dijkstra(x,y);
		bfs(x,y);
	}
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	// cin>>t;
	sieve();
	while(t--) solve(), cout<<'\n';
}
