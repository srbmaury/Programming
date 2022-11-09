// Arrays, linked lists, stacks and queues are all linear(sequential) data structures
// Tree for hirarchical data
// Topmost node: root
// children and parent siblings(children of same parent)
// Any node that does not have a child is called leaf node
// All other nodes with atleast one child can be called internal node
// Grandparent
// A is ancestor of B
// B is descendent of A
// Node having different parents but same grandparent: cousins and one's parent is uncle of other

// Recursive data structure
// In a tree with N nodes there will be excatly N-1 edges
// Depth and height 
// Depth of x: length of path from root to x OR number of edges in path from root to x
// Height of x: Number of edges in longest path from x to a leaf
// height of leaf nodes =0
// height of tree = height of root nodes


// Binary tree ; Any node can have maximum of two children
struct Node{
    int data;
    Node* left;
    Node* right;
};



// Two kinds of tree traversal algorithms
// 1. Breadth first
// 2. Depth first
// tree is only a special kind of graph
/*
            F 
          /  \
              J
       / \   / \
      B   E G   K 
    /  \     \
   A    C     I 
             /
            H   
Breadth first: F, D, J, B, E, G, K, A, C, I, H   (Level order traversal)
Depth first
<root> <left> <right> Preorder
<left> <root> <right> Inorder
<left> <right> <root> Postorder*/
// Preordder(D L R) F, D, B, A, C, E, J, G, I, H, K
// Inorder(L D R) A, B, C, D, E, F, G, H, I, J, K
// Postorder(L R D) A, C, B, E, D, H, I, G, K, J, F
