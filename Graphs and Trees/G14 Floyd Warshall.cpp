#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e3+10;
const int INF = 1e9+10;

int dist[N][N];
void solve(){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			(i==j) ? dist[i][j] = 0 : dist[i][j] = INF;
		}
	}
	int n,m; cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,wt; cin>>x>>y>>wt;
		dist[x][y]=wt;
	}

	for(int k=1; k<=n; k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dist[i][k] != INF and dist[k][j] != INF)
					dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
			}
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(dist[i][j]==INF) cout<<"I ";
			else cout<<dist[i][j]<<' ';
		}
		cout<<"\n";
	}

}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t=1;
	cin>>t;
	while(t--) solve(), cout<<'\n';
}
