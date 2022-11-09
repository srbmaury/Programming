// for each node count the number of unique integers in its subtree 
/*AUTHOR: Saurabh Maurya COLLEGE : IIT-BHU*/

#include <bits/stdc++.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define pb push_back
using namespace std;
const int N =2e5+10;
vector<int>g[N], col(N,0), res(N,0);
set<int>*st[N];
void dfs(int ver, int par){

    int mx = 0;
    int mxNode = -1;
    for(auto child : g[ver]){
        if(child^par){
            dfs(child,ver);
            if(st[child]->size() > mx) 
                mx = st[child]->size(), mxNode = child;
        }
    }
    if(mxNode == -1) st[ver] = new set<int>();
    else st[ver] = st[mxNode];

    st[ver] -> insert(col[ver]);

    for(auto child : g[ver]){
        if((child^par) and (child ^ mxNode)){
            for(int color : *st[child])
            st[ver] -> insert(color);
        }
    }
    res[ver] = st[ver]->size();
}
void love(){
	int n; cin>>n;
	rep(i,1,n+1) cin>>col[i];
	rep(i,1,n){int x,y;cin>>x>>y;g[x].pb(y);g[y].pb(x);}

	dfs(1,-1);

	rep(i,1,n+1)cout<<res[i]<<' ';
    
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    love(), cout<<'\n';
    return 0;
}