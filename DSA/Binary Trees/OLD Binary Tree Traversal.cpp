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

// 1. Breadth first
#include<iostream>
#include<queue>
using namespace std;
struct Node{
    char data;
    Node* left;
    Node* right;
};
void LevelOrder(Node* root){    //time complexity O(n)
    if(root==NULL) return;
    queue<Node*> Q;
    Q.push(root);
    //while there is atleast one discovered node
    while(!Q.empty()){
        Node* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop(); // remove the element at front
    }
}
// space complexity
// measure of rate of growth of extra memory used with input size  // assuming queue to be dynamic
// O(1) best  for a liner binary tree
// O(n) worst/avg   for a perfect binary tree   (atleast n/2)
int main(){
    /*Some code to test LevelOrder function*/

}