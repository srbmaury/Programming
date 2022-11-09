// Deleting a node from Binary Search Tree (B S T)
BstNode* FindMin(BstNode *root){
    while(root->left)
        root = root -> left;
    return root;
}
BstNode* Delete(BstNode* root, int data){
    if(root==NULL) return root;
    else if(data < root->data) root->left = Delete(root->left,data);
    else if(data > root->data) root->right = Delete(root->right,data);
    else{  // Wohoo.. I found you, Get ready to be deleted

        // Case 1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;    // delete operator is used to deallocate memorry of an object in heap
            root = NULL;
        }
        // Case 2: One child
        else if(root->left == NULL){
            BstNode* temp=root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            BstNode* temp=root;
            root = root->left;
            delete temp;
        }
        // Case 3: 2 children
        else{
            BstNode* temp=FindMin(root->right);                     // check for FindMin
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
        return root;
    }
}