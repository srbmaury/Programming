// https://www.codechef.com/problems/SNSOCIAL
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
const int INF = 1e9+10;
int val[N][N];
int vis[N][N];
int lvl[N][N];
int n,m;

vector<pair<int,int>> movements = {
	{1,0} , {-1,0} , {0,1} , {0,-1} ,
	{1,1} , {-1,1} , {-1,-1} , {1,-1}
};
bool is_valid(int i, int j){
	return i>=0 and j>=0 and i<n and j<m;
}
void reset(){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			vis[i][j]=0;
			lvl[i][j]=INF;
		}			
	}
}
int bfs(){
	int mx = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			mx=max(mx,val[i][j]);
		}			
	}

	queue<pair<int,int>>q;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(mx == val[i][j]){
				q.push({i,j});
				lvl[i][j] = 0;
				vis[i][j] = 1;
			}
		}			
	}
	int ans = 0;
	while(!q.empty()){
		auto v = q.front();
		int v_x = v.first;
		int v_y = v.second;
		q.pop();

		for(auto movement : movements){
			int child_x = movement.first + v_x;
			int child_y = movement.second + v_y;

			if(!is_valid(child_x, child_y)) continue;
			if(vis[child_x][child_y]) continue;
			vis[child_x][child_y]=1;
			lvl[child_x][child_y] = lvl[v_x][v_y]+1;
			q.push({child_x,child_y});
			ans = max(ans, lvl[child_x][child_y]);
		}
	}
	return ans;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		reset();
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>val[i][j];
			}			
		}
		cout<<bfs()<<'\n';
	}

}