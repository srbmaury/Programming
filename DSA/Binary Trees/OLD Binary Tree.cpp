/* Strict/proper binary tree
each node can have either 2 or 0 children*/
/* Complete binary tree
all levels except possibly the last are completely filled and all nodes are as left as possible*/
/* Perfect binary tree
All levels must be completely filled*/
// max. number of nodes in a perfect binary tree=2^(number of levels) - 1
/*Balanced binary tree
difference between height of left and right subtree for every node is not more than k (mostly 1)  */
// height of tree with just one node=0
// height of an empty tree=-1
// #include<iostream>
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
// };


// Binary search tree
// What data structure you will use to store a modifiable collection
// Search(x) Insert(x) Remove(x) wrt array time complexities O(n) O(1) O(n)
// Best running time for search in a sorted array O(log n) binaary search
// BST(Binary Search Tree) is a binary tree in which for each node, value of all the nodes 
//in left subtree is lesser or equal and value of all the nodes in right subtree is greater
/*
            15
          /    \
        10     20
       /  \   /  \
      8  12   17  25
*/
// I M P L E M E N T A T I O N   of   B S T  
#include<iostream>
#include<queue>
using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data){
    BstNode* newNode=new BstNode();
    // (*newNode).data=data;
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
}

BstNode* Insert(BstNode* root,int data){
    if(root==NULL){
        root=GetNewNode(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;
}

bool Search(BstNode* root, int data){
    if(root==NULL) return false;
    else if(root->data==data) return true;
    else if(data<=root->data) return Search(root->left,data);
    else return Search(root->right,data);
}

// iterative approach
int findMin(BstNode* root){
    if(root==NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    // BstNode* current=root;
    // while(current->left != NULL)
    //     current=current->left;
    // return current->data;
    // since here only a reference of root node is passed we can do these manipulations with root itself
    while(root->left != NULL)
        root=root->left;
    return root->data;
}

// recursive approach
int FindMin(BstNode* root){
    if(root==NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    else if(root->left==NULL)
        return root->data;
    return FindMin(root->left);
}

int FindMax(BstNode* root){
    if(root==NULL){
        cout<<"Error: Tree is empty\n";
        return -1;
    }
    else if(root->right==NULL)
        return root->data;
    return FindMax(root->right);
}

int FindHeight(BstNode* root){
    if(root==NULL)
        return -1;
    return max(FindHeight(root->left),FindHeight(root->right)) +1;
}

void LevelOrder(BstNode* root){
    if(root==NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    //while there is atleast one discovered node
    while(!Q.empty()){
        BstNode* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop(); // remove the element at front
    }
}


void Preorder(BstNode *root){
    if(root==NULL) return;
    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(BstNode *root){
   if(root==NULL) return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right); 
}
void Postorder(BstNode *root){
   if(root==NULL) return;
    Postorder(root->left);
    Postorder(root->right); 
    printf("%d ", root->data);
}

vector<int> Inorder(BstNode *root){
    vector<int> v;
    stack<BstNode*>s;
    BstNode *curr = root;
    while(curr != NULL || s.empty() == false){
        /* Reach the left most Node of the current Node */
        while(curr != NULL){
            /* place pointer to a tree node on the stack before traversing the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }
        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();
        v.push_back(curr->data);
        curr = curr ->right;
    }
    return v;
}
// TIme complexity of these three algorithms O(n)
// Space complexity O(h)  worst case O(n-1) in  worst or avg case O(log n) base 2

bool IsSubtreeLesser(BstNode* root, int value){
    if(root==NULL) return true;
    if(root->data <= value && IsSubtreeLesser(root->left, value) && IsSubtreeLesser(root->right, value))
        return true;
    else 
        return false;
}

bool IsSubtreeGreater(BstNode* root, int value){
    if(root==NULL) return true;
    if(root->data > value && IsSubtreeGreater(root->left, value) && IsSubtreeGreater(root->right, value))
        return true;
    else 
        return false;
}

bool IsBinarySearchTree(BstNode* root){
    if(root==NULL) return true;
    // easy to think but not efficient
    if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->right,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
        return true;
    else 
        return false;
}  //   O(n^2)
// 2nd way
bool IsBstUtil(BstNode* root, int minValue, int maxValue){
    if(root==NULL) return true;
    // every node must have different data
    // if(root->data < minValue && root->data > maxValue && IsBstUtil(root->left,minValue,root->data) && IsBstUtil(root->right,root->data,maxValue))
    if(root->data > minValue && root->data < maxValue && IsBstUtil(root->left,minValue,root->data) && IsBstUtil(root->right,root->data,maxValue))
        return true;
    else 
        return false;
}
bool isBinarySearchTree(BstNode* root){
    return IsBstUtil(root,INT_MIN,INT_MAX);
}   // O(n)
int main(){
    BstNode* rootPtr=NULL;  // pointer to root node
    rootPtr = Insert(rootPtr,15); rootPtr = Insert(rootPtr,10); rootPtr = Insert(rootPtr,20);
    rootPtr = Insert(rootPtr,25); rootPtr = Insert(rootPtr,8); rootPtr = Insert(rootPtr,12);
    int number;
    cout<<"Enter the number to be searched: ";
    cin>>number;
    if(Search(rootPtr,number)==true) cout<<"Found\n";
    else cout<<"Not Found\n"; 
    int d=findMin(rootPtr);
    int e=FindMin(rootPtr);
    int g=FindMax(rootPtr);
    int f=FindHeight(rootPtr);
    printf("%d   %d    %d    %d\n", d,e,f,g);
    LevelOrder(rootPtr);  printf("\n");
    Preorder(rootPtr); printf("\n");
    Inorder(rootPtr); printf("\n");
    Postorder(rootPtr); printf("\n");
    bool k= IsBinarySearchTree(rootPtr);
    bool l= isBinarySearchTree(rootPtr);
    cout<<k<<" "<<l;
    return 0;
}
