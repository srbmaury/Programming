// Given a node in BST we need to find its inorder successor
// L D R 
// Inorder implementation
#include<iostream>
using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
    BstNode* parent;
};
// void Inorder(BstNode* root){     // time complexity O(n)
//     if(root==NULL) return;    // base of exit condition
//     Inorder(root->left);
//     cout<<root->data;
//     Inorder(root->right);
// }
// Search O(h) for successor or predecesor h=log n to base 2
// function to find successor
BstNode* FindMin(BstNode* root){
    if(root==NULL) return NULL;
    while(root->left != NULL)
        root=root->left;
    return root;
}
BstNode* Getsuccessor(BstNode* root, int data){
    // Search the Node - O(h)
    BstNode* current = Find(root, data);
    if(current==NULL) return NULL;
    // Case 1: Node has right subtree
    if(current->right != NULL){
        return FindMin(current->right);  //  O(h)
    }
    // Case 2: No right subtree  - O(h)
    else{
        BstNode* succesor = NULL;
        BstNode* ancestor = root;
        while(ancestor != current){
            if(current->data < ancestor->data){
                succesor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return succesor;
    }
}
