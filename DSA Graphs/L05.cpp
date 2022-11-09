// Bipartite graph
/*
Bipartite graph, also known as bipartite special graph such that 
you can divide the vertex set into 2 disjoint sets such that:

	1.  Each vertex belongs to exactly one of the two sets
	2. 	Each edge connects vertices of 2 different sets


// Two colouring problem

bool dfs(int v, int c){
	vis[v]=1;
	col[v]=c;

	for(int child:ar[v]){
		if(vis[child] == 0){
			if(dfs(child,c^1)==false)
				return false;
		}
		else 
		if(col[v] == col[child])
			return false;
	}
	return true;
}

*/

