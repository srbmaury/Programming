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

int main(){
	struct Node *root = new Node(5);
	root -> left = new Node(6);
	root -> right = new Node(7);

	root -> left -> left = new Node(8);
	root -> left -> right = new Node(9);
	root -> left -> right -> left = new Node(1);

}