// Shortest path using bfs
// https://www.spoj.com/submit/NAKANJ/

#include<bits/stdc++.h>
using namespace std;

int vis[8][8], lvl[8][8];
int getX(string s){
	return s[0]-'a';
}
int getY(string s){
	return s[1]-'1';
}
int bfs(string source, string dest){
	int sourceX = getX(source);
	int sourceY = getY(source);
	int destX = getX(dest);
	int destY = getY(dest);

	queue<pair<int,int>>q;

	q.push({sourceX, sourceY});
	vis[sourceX][sourceY]=1;
	while(!q.empty()){
		pair<int,int>curr_ver = q.front();
		int x = curr_ver.first;
		int y = curr_ver.second;
		for(int i=-2; i<=2; i++){
			for(int j=-2; j<=2; j++){
				if(abs(i) == abs(j) or i==0 or j==0) continue;
				if(x+i<8 and x+i>=0 and y+j<8 and y+j>=0 and !vis[x+i][y+j]){
					vis[x+i][y+j] = 1;
					q.push({x+i,y+j});
					lvl[x+i][y+j] = lvl[x][y] + 1;
				}
			}
		}
		q.pop();
	}
	return lvl[destX][destY];
}
void reset(){
	for(int i=0; i<8; i++){
		for(int j=0;j<8;j++){
			vis[i][j] = lvl[i][j] = 0;
		}
	}
}
signed main(){
	int t; cin>>t;
	while(t--){
		reset();
		string s1,s2; cin>>s1>>s2;
		cout<<bfs(s1,s2)<<'\n';
	}
}