// https://codeforces.com/contest/295/problem/B
#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e3+10;
const int INF = 1e16+10;

int dist[N][N];
void solve(){

	int n; cin>>n;

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			dist[i][j] = INF;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>dist[i][j];
		}
	}
	vector<int>v(n);
	rep(i,0,n) cin>>v[i];

	reverse(v.begin(), v.end());

	vector<int> ans;
	for(int k=0; k<n; k++){

		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dist[i][j] = min(dist[i][j], dist[i][v[k]] + dist[v[k]][j]);
			}
		}
		int sum=0;
		for(int i=0; i<=k; i++){
			for(int j=0; j<=k; j++){
				sum+= dist[v[i]][v[j]];
			}
		}
		ans.pb(sum);
	}

	for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<' ';

}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--) solve(), cout<<'\n';
}