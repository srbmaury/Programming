/* 
Three types of DFS for trees 

Preorder Traversal  (Root Left Right)
Inorder Traversal   (Left Root Right)
Postorder Traversal (Left Right Root)

*/

/*       5
        / \
       6   7
     /  \
    8    9
        /
       1

*/


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void Inorder(Node *root){
   if(root==NULL) return;
    Inorder(root->left);
    cout<<root->data<<' ';
    Inorder(root->right); 
}

void inOrder(Node *root){
    stack<Node*>st;
    while (true){
        if (root != nullptr){
            st.push(root);
            root = root->left;
        }
        else{
            if(st.empty()) break;
            root = st.top();
            st.pop();
            cout << root->data << " ";
            root = root->right;
        }
    }
}


int main(){
    struct Node *root = new Node(5);
    root -> left = new Node(6);
    root -> right = new Node(7);

    root -> left -> left = new Node(8);
    root -> left -> right = new Node(9);
    root -> left -> right -> left = new Node(1);


    Inorder(root); cout<<'\n';
    inOrder(root);
}