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


vector<int> BFS(Node* node){
    queue<Node*>q;
    vector<int>ans;
    q.push(node);
    while(!q.empty()){
        Node *f = q.front();
        if(f -> left != NULL)
            q.push(f->left);
        if(f -> right != NULL)
            q.push(f->right);
            
        ans.push_back(f->data);
        q.pop();
    }
    return ans;
}

vector<vector<int>> levelOrder(Node* node){
    queue<Node*>q;
    vector<vector<int>>ans;
    if(node == NULL) return ans;
    q.push(node);
    while(!q.empty()){
        
        int sz = q.size();
        vector<int>tmp;
        for(int i=0; i<sz; i++){
            Node *f = q.front();
            if(f -> left != NULL)
                q.push(f->left);
            if(f -> right != NULL)
                q.push(f->right);
                
            tmp.push_back(f->data);
            q.pop();
        }
        ans.push_back(tmp);
    }
    return ans;
}

vector<int> reverseLevelOrder(Node *node){
    queue<Node*>q;
    vector<int>ans;
    q.push(node);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();
        
        if(f -> right != NULL)
            q.push(f->right);
        if(f -> left != NULL)
            q.push(f->left);
            
        ans.push_back(f->data);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<vector<int>> levelOrderBottom(Node* root) {
    queue<Node*>q;
    vector<vector<int>>ans;
    if(root == NULL) return ans;
    q.push(root);
    while(!q.empty()){
        vector<int>tmp;
        int sz = q.size();
        for(int i=0; i<sz; i++){
            Node *f = q.front();
            if(f -> left != NULL)
            q.push(f->left);
            if(f -> right != NULL)
                q.push(f->right);
            tmp.push_back(f->data);
            q.pop();
        }
        ans.push_back(tmp);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
	struct Node *root = new Node(5);
	root -> left = new Node(6);
	root -> right = new Node(7);

	root -> left -> left = new Node(8);
	root -> left -> right = new Node(9);
	root -> left -> right -> left = new Node(1);

	vector<vector<int>> ans = levelOrder(root);

	for(auto &x: ans){
		for(auto &y: x) cout<<y<<' '; cout<<'\n';
	}

}