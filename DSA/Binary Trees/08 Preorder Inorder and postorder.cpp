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


void traversal(Node *root){
    stack<pair<Node*,int>>st;
    st.push({root,1});

    vector<int>preOrder, inOrder,postOrder;
    while(!st.empty()){
        auto ele = st.top();
        if(ele.second == 1){
            preOrder.push_back(ele.first->data);
            st.pop();
            st.push({ele.first,2});
            if(ele.first -> left != NULL){
                st.push({ele.first->left,1});
            }
        }
        else if(ele.second == 2){
            inOrder.push_back(ele.first->data);
            st.pop();
            st.push({ele.first,3});
            if(ele.first -> right != NULL){
                st.push({ele.first->right,1});
            }
        }else{
            postOrder.push_back(ele.first->data);
            st.pop();
        }
    }

    cout<<"Preorder : "; for(auto &x:preOrder)cout<<x<<' '; cout<<'\n';
    cout<<"Inorder : "; for(auto &x:inOrder)cout<<x<<' '; cout<<'\n';
    cout<<"Postorder : "; for(auto &x:postOrder)cout<<x<<' '; cout<<'\n';
}

int main(){
    struct Node *root = new Node(5);
    root -> left = new Node(6);
    root -> right = new Node(7);

    root -> left -> left = new Node(8);
    root -> left -> right = new Node(9);
    root -> left -> right -> left = new Node(1);


    traversal(root);
}