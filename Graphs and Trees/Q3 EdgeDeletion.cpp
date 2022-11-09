// To delete an edge to get maximum product of sums of two subtrees
// Vector A gves weight of nodes from to N 
// Vector B denotes the edges
// https://www.interviewbit.com/problems/delete-edge/#:~:text=Given%20a%20undirected%20tree%20with,in%20other%20subtree%20is%20maximized.
const int M = 1e9+7;
void dfs(int vertex, vector<int>&A, int parent, vector<int>g[], vector<int>&pre){

	pre[vertex] += A[vertex-1];
	for(auto child : g[vertex]){
		if(child == parent) continue;
		dfs(child, A, vertex, g, pre);
        pre[vertex] += pre[child];
	}
}
int Solution::deleteEdge(vector<int> &A, vector<vector<int> > &B) {
    vector<int>g[A.size()+1];
    vector<int>pre(A.size()+1,0);
    for(auto edge:B){
        g[edge[0]].push_back(edge[1]);
        g[edge[1]].push_back(edge[0]);
    }
    dfs(1,A,0, g, pre);
    int l = A.size();
    long long res = 0;
    for(int i=2; i<=l; i++){
        res = max(res, 1LL*pre[i]*(pre[1]-pre[i])%M);
    }
    return res;
}
