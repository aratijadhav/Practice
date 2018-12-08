int HeightOfTree(Node *root){

    int left = 0,right = 0;

    if(root == NULL)
        return 0;

    left = HeightOfTree(root->left);
    right = HeightOfTree(root->right);

    if(left > right)
        return 1+left;
    else
        return 1+right;
}