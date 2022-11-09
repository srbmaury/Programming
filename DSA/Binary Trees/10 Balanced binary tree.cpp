// For every node height(left)-height(right) <= 1;
// If tree is balanced it return height else -1
int check(Node* root) {
    if(root == NULL) return 0;
    int lh = lh;
    int rh = check(root->right);
    if(abs(lh-rh)>1) return -1;
    if(lh == -1 or rh == -1) return -1;
    return max(lh,rh)+1;
}
