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

void Postorder(Node *root){
   if(root==NULL) return;
    Postorder(root->left);
    Postorder(root->right); 
    cout<<root->data<<' ';
}

void postOrder(Node *root){
    stack<Node*>st;
    stack<Node*>st2;
    st.push(root);
    while (!st.empty()){
        auto ele = st.top();
        st.pop();
        st2.push(ele);
        if(ele->left != NULL)
            st.push(ele->left);
        if(ele->right != NULL)
            st.push(ele->right);
    }
    while(!st2.empty()){
        cout<<st2.top()->data<<' '; st2.pop();
    }
}




int main(){
    struct Node *root = new Node(5);
    root -> left = new Node(6);
    root -> right = new Node(7);

    root -> left -> left = new Node(8);
    root -> left -> right = new Node(9);
    root -> left -> right -> left = new Node(1);


    Postorder(root); cout<<'\n';
    postOrder(root);
}