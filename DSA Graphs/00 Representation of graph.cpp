// G=(V,E)
// Create two lists
// 1. To store all the vertices
// 1. To store all the edges
// For list we can use array of appropriate size or a dynamic list(such as vector in C++)
// Vertices: List of names or strings
// Edge: an object with two fields
struct Edge{
    char *startVertex;
    char *endVertex;
    int weight;
};
/*      OR
class Edge{
    string startVertex;
    string endVertex;
    int weight;
};                     5
                  A---------B
               7/  \ 3     / \ 10
               /    \     /2  \
              C      D   E     F
            1\     11\   \9  /4
               \       \  \ /
                G---------H
                      6
VERTEX LIST        EDGE LIST
    A                A B 5
    B                A C 7
    C                A D 3 
    D                B E 2
    E                B F 10
    F                C G 1
    G                D H 11
    H                E H 9
                     F H 4
                     G H 6    */
// string vertex_list[MAX_SIZE];
// Edge edge_list[MAX_SIZE];
// Cost :-
// 1) Time cost of operations     Time Complexity    
// 2) Memory usage                Space Complexity   O(|V|)
// O(E) comarable to O(|V|*|V|)

// For an efficient usage we can store edges in two dimensional array or matrix having size V*V
/*                0         1
                  A---------B
                /  \       / \ 
               /    \     /   \
            2 C    3 D 4 E   5 F
              \       \  \    /
               \       \  \ /
              6 G---------H 7
*/
// If graph is unweighted and each index has value from 0 to N-1
// Aij= 1 if there exists edge from i to j
//      0 otherwise
/*  Adjacency Matrix
     0  1  2  3  4  5  6  7

0    0  1  1  1  0  0  0  0
1    1  0  0  0  1  1  0  0 
2    1  0  0  0  0  0  1  0                space O(V^2)
3    1  0  0  0  0  0  0  1
4    0  1  0  0  0  0  0  1
5    0  1  0  0  0  0  0  1                *********
6    0  0  1  0  0  0  0  1
7    0  0  0  1  1  1  1  0
*/
// If graph is sparse i.e., number of edges is much less than V^2 we are wasting our memory in storing zeroes
// This matrix is symmetric for an undirected graph  as Aij = Aji  
// Aii = 0
// To see all edges in an undirected graph we would have to go with any of 
// triangular matrix divided by main diagonal
// 1.  Time cost of finding adjacent nodes   O(V)
//        Find index of eg F(5) by scanning vertex list and then scan row with number 5
//        0  1  2  3  4  5  6  7
//        0  1  0  0  0  0  0  1
//        So it is connected to node 1 and node 7
// 2. Finding if two nodes are connected 
//        If indices i and j are passed we simply need to look at Aij    O(1)
//        If names are given scanning would take O(V) time     overall O(V)
// scanning vertex list each time can be avoided but it will take extra memory
// We can create hash table with names and indices as key-value pairs

// WEIGHTED GRAPH
// Aij weight of an edge 
/*  Adjacency Matrix
     0  1  2  3  4  5  6  7

0    ∞  5  7  3  ∞  ∞  ∞  ∞
1    5  ∞  ∞  ∞  2  10 ∞  ∞ 
2    7  ∞  ∞  ∞  ∞  ∞  1  ∞
3    3  ∞  ∞  ∞  ∞  ∞  ∞  11
4    ∞  2  ∞  ∞  ∞  ∞  ∞  9
5    ∞  10 ∞  ∞  ∞  ∞  ∞  4                *********
6    ∞  ∞  1  ∞  ∞  ∞  ∞  6
7    ∞  ∞  ∞  6  11 9  4  ∞
*/   
// In general in adjacency matrix row index indicates the start point and column index indicates the end point

// List of all the nodes which are connected
// For A  {1,2,3} using indices {B,C,D} using names
// We can use array linked list or tree(binary search tree)
// If binary tree is balanced search insertion and deletion can be performed in (log n) time n-number of nodes

/*
Instead of adjacency matrix
0   1 2 3 
1   0 4 5
2   0 6
3   0 7                   space O(e)   e - number of edges
4   1 7
5   1 7
6   2 7
7   3 6 4 5
*/
// int *A[8];
// A[0] = new int[3];
// A[1] = new int[3];
// A[2] = new int[2];
// A[3] = new int[2];
// A[4] = new int[2];
// A[5] = new int[2];
// A[6] = new int[2];
// A[7] = new int[4];
// If each row is a linked list it is better to add a new element
struct Node{
  int data;
  int weight;
  struct Node* next;
};
struct Node *A[8];       //array of pointers 
// space complexity O(|E|+|V|)   |E|<<|V|*|V|