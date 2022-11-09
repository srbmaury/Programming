#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

vector<pair<int,int>> graph2[N];
int main(){
	int n, m; 
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int v1, v2, wt;
		cin>>v1>>v2>>wt;

		graph1[v1][v2] = wt;
		graph1[v2][v1] = wt;

		// Adjacency Matrix
		// O(N^2) - space complexity
		// N <= 10^3



		graph2[v1].push_back({v2,wt});
		graph2[v2].push_back({v1,wt});

		// Adjacency List
		// O(N + M) - space complexity
		// n <=1e5 E<=1e7
	}

	int i,j, weight; 
	if(graph1[i][j] == 1){
		//connected
		weight = graph1[i][j];
	}
	

	for(pair<int,int> child : graph2[i]){
		if(child.first == j){
			// connected
			weight = child.second;
		}
	}
}