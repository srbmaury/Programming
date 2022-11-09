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
    if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->left,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
        return true;
    else 
        return false;
}