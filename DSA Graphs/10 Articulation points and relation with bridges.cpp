// Not all end points of bridges are articulation points 
// as point 1 in graph below

/*
1----2
    / \
   3---4
*/

// An end point of a bridge with degree > 1 
// is an articulation point 



// Cut vertices can exist without existence of a single bridge
// as point 2

/*
1----2------4
|   / \    /
|  /   \  /
| /      5
 3
*/


#include<bits/stdc++.h>
#define int long long
#define rep(i,k,n) for(int i=k; i<n; i++)
#define pb push_back
using namespace std;

int n; // number of nodes
vector<vector<int>> adj; // adjacency list of graph

vector<bool> visited;
vector<int> tin, low;

set<int>articulation_points;
int timer;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= tin[v] && p!=-1)
                articulation_points.insert(v);
            ++children;
        }
    }
    if(p == -1 && children > 1)
        articulation_points.insert(v);
}

void find_cutpoints() {
    timer = 0;
    // visited.assign(n, false);
    // tin.assign(n, -1);
    // low.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs (i);
    }
}

void solve(){
    int m;cin>>n>>m;
    adj.clear();
    adj.resize(n+1);
    visited.clear();
    tin.clear();
    low.clear();
    visited.resize(n+1,false);
    tin.resize(n+1,-1);
    low.resize(n+1,-1);
    while(m--){
        int x,y; cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    find_cutpoints();
    for(auto &x:articulation_points){
        cout<<x<<' ';
    }
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) solve(), cout<<'\n';
}
