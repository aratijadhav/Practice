

Node *deleteNode(Node *root,int data){

    if(root == NULL)
        return root;
    if(root->data > data)
        root->left = deleteNode(root->left,data);
    if(root->data < data)
        root->right = deleteNode(root->right,data);

    else{
        if(root->left == NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }

        else{
            Node *temp = minValue(root->right);
            root->data = temp->data;

            root->right = deleteNode(root->right,temp->data);
        }

    }

    return root;
}