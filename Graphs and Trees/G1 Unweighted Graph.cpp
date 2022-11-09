#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

vector<int> graph2[N];
int main(){
	int n, m; 
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int v1, v2;
		cin>>v1>>v2;

		graph1[v1][v2] = 1;
		graph1[v2][v1] = 1;

		// Adjacency Matrix
		// O(N^2) - space complexity
		// N <= 10^3



		graph2[v1].push_back(v2);
		graph2[v2].push_back(v1);

		// Adjacency List
		// O(N + M) - space complexity
		// n <=1e5 E<=1e7
	}

	// i,j connected ? , i,j -> wt ?
	int i,j; 
	if(graph1[i][j] == 1){
		//connected
	}

	for(int child : graph2[i]){
		if(child == j){
			// connected
		}
	}
}
