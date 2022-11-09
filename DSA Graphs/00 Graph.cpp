// In tree if N nodes the (N-1) edges
// One edge for each parent-child relationship
// In graph there are no rules for connections
// Tree is only a special kind of graph
// A graph G is an ordered pair of a set V of vertices and set E of edges G=(V,E)
// Ordered pair (a,b) != (b,a) if a != b
// Unordered pair {a,b}
/*
     V1------V2
    / \      / \
   /   \    /   \ 
  V3   V4  V5   V6
  \      \ \    /
   \       \ \ /
   V7------- V8
*/
// V={V1, V2, V3, V4, V5, V6, V7, V8}
// Edge is uniquely identified by its two end points
// Directed edge : One way connection  U----->V  represented as ordered pair (U,V)
// Combination of two directed edges U--->V and V--->U gives an undirected age U----V
// Undirected edge : Two way connection  U-----V represented as unordered pair {U,V}
// E=({V1,V2},{V1,V3},{V1,V4},{V2,V5},{V2,V6},{V3,V7},{V4,V8},{V7,V8},{V5,V8},{V6,V8})
// It is possible for a graph to have both directed and undirected edges
// A graph with all directed edges would be called a directed graph or digraph
// A graph with all undirected edges would be called an undirected graph or digraph
// Used to represent social network and edges connecting friends
// Link between websites as directed graphs
// Web crawling is simply graph trversal

// Weighted and Unweighted graphs
// Weight or cost can be length of the road
// Unweighted graph can be seen as a weighted graph in which weight of all thye edges is same
// Typically we assume the weight as 1
// Intercity road network : weighted undirected graph
// Social network : unweighted undirected graph
// World wide web : unweighted directed graph
// Intracity road network(road network within a city) : weighted directed graph
// Undirected can be redrwan as directed
// Directed can not be redrwan as undirected


// PROPERTIES OF GRAPHS
// An edge is called self loop or self edge if it involves only one vertex
// We can have self loop in both directed and undirected graphs
// Multiedge or parallel edge as for flights
// We can have self multiedge in both directed and undirected graphs
// A graph without self loop or multiedges is called a simple graph
// Directed graphs: For |v|=4 Emin={phi} maximum 12 edges 
// In a simple directed graph if |V|=n 0<=|E|<=n(n-1)
// In an simple undirected graph if |V|=n 0<=|E|<=n(n-1)/2
// Dense if number of edges in the graph is close to maximum possible number of edges 
// (typically close to squre of the number of vertices)
// Sparse if number of edges in the graph very less (typically close to number of vertices)
// We store dense graph in adjacency matrix and sparse graph in adjacency list
// Path: a sequence of vertices where each adjacent pair is connected by edge
// As <V1,V2,V6,V8> in above graph
// A path is called a simple path if no vertices are repeated
// If verices are not repeated, edges would also not be repeated
// <V1,V2,V6,V8,V5,V2,V1,V4> one path and two vertices are repeated
// A path in which repitition is possible is called a walk
// A walk is called a trail if vertices can be repeated but edges cannot be repeated
// <V1,V2,V5,V8,V4,V1,V3> is a trail


// Strongly connected graphs:  (Always Directed)
// If there is a path from any vertex to any other vertex
/*
A-------C
\      /
 \    /                           // Weakly connected
    B   */
// Undirected graphs may be connected if there is a path to any node from any other node
/* If a directed graph is not strongly connected but can be turned into connected graph 
by treating all edges as undirected then such a directed graph is called weakly connected graph*/
/*
B-----A

C
 \
   D------E         */     //NOT CONNECTED
// Closed Walk: A walk is called a closed walk if it starts and ends at same vertex
// and length of the walk must be greater than zero
// as V2 V6 V8 V5 in first graph
//Simple cycle: a closed walk in which other than start and end vertices no other vertex or eedge is repeated
// A graph with no cycle is called an ACYCLIC GRAPH
// A tree with undirected edges : an example of undirected acyclic graph
// In tree we can have a closed walk (A-B-A) but we cannot have a simple cycle(as edge would be repeated)
// Directed acyclic graph (often called as DAG)
