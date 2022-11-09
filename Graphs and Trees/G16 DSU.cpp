#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e5+10;
int parent[N];
int sz[N];

void make(int v){
	parent[v] = v;
}
int find(int v){
	if(v == parent[v]) return v;
	return parent[v] = find(parent[v]);
}
void Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b){
		if(sz[a] < sz[b])
			swap(a,b);
		parent[b] = a;
		sz[a] += sz[b];
	}
}
void solve(){
	int n,k; cin>>n>>k;
	for(int i=1;i<=n;i++) make(i);
	while(k--){
		int u,v; cin>>u>>v;
		Union(u,v);
	}
	int connected_ct = 0;
	for(int i=1;i<=n;i++) if(find(i)==i) connected_ct++;
	cout<<connected_ct;
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--) solve(), cout<<'\n';
}
