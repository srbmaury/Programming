
#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;
const int N = 1e5+10;
vector<vector<int>>g;
vector<int>vis(N,0);


// Find any node which was visited earlier 
// and it still hasn't completed it's execution


/* vis[node] = 0 UNVISITED
   vis[node] = 1 UNDER-PROCESS
   vis[node] = 2 COMPLETED
*/

bool dfs(int v, bool isCycle = false){
	vis[v] = 1;
	for(auto child : g[v]){
		if(!vis[child]){
			if(dfs(child, isCycle) == true) 
				return true;
		}
		else if(vis[child] == 1)
			return true;
	}
	vis[v] = 2;
	return false;
}

signed main(){

}