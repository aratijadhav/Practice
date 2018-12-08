Node *insertNode(Node *root,int data){

    Node *nn = (Node *)malloc(sizeof(Node));
    nn->left = nn->right = NULL;
    nn->data = data;


    if(root == NULL){
        root = nn;
    }

    if(root->data > data){
        root->left = insertNode(root->left,data);
    }

    if(root->data < data){
        root->right = insertNode(root->right,data);
    }

    return root;
}