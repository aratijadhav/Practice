void preOrder(Node *root){

    if(root){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


void inOrder(Node *root){

     if(root){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }

}


void postOrder(Node *root){

     if(root){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }

}