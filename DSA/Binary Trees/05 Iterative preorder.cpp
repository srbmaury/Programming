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


void Preorder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<' ';
    Preorder(root->left);
    Preorder(root->right);
}

void preOrder(Node *root){
	stack<Node*>st;
	if(root == NULL) return;
	st.push(root);
	while(!st.empty()){
		auto ele = st.top();
		cout<<ele->data<<' ';
		st.pop();

		if(ele -> right != NULL)
			st.push(ele->right);

		if(ele -> left != NULL)
			st.push(ele->left);
	}
}

int main(){
	struct Node *root = new Node(5);
	root -> left = new Node(6);
	root -> right = new Node(7);

	root -> left -> left = new Node(8);
	root -> left -> right = new Node(9);
	root -> left -> right -> left = new Node(1);


	Preorder(root); cout<<'\n';
	preOrder(root);
}