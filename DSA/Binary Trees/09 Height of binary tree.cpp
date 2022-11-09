int height(struct Node* node){
    int id = 1;
    int h[100010], mx = 1;
    node -> data = id++;
    h[node->data] = 1;
    queue<Node*>q;
    q.push(node);
    while(q.size()){
        Node *ele = q.front();
        
        if(ele->left != NULL){
            ele->left->data = id++;
            q.push(ele->left);
            h[ele->left->data] = h[ele->data] + 1;
            mx = max(mx, h[ele->left->data]);
        }
        
        if(ele->right != NULL){
            ele->right->data = id++;
            q.push(ele->right);
            h[ele->right->data] = h[ele->data] + 1;
            mx = max(mx, h[ele->right->data]);
        }
        q.pop();
    }
    // 1 2 3 N N 4 6 N 5 N N 7 N
    // 5 5 N 4 10 N 8 5 N 8 8 N 6
    return mx;
}



int maxDepth(Node* root) {
    if(root == NULL) return 0;
    return max(maxDepth(root->left), maxDepth(root->right))+1;
}