void printLeftBoundary(Node *root){

    if(root){
        printf("%d",root->data);
        printLeftBoundary(root->left);
    }

    if(root->right){
        printf("%d",root->data);
        printLeftBoundary(root->right);
    }
}

void printLeaves(Node *root){

    if(root){
        printLeaves(root->left);

        if(!root->left && !root->right){
            printf("%d",root->data);
        }

        printLeaves(root->right);
    }

}

void printRightBoundary(Node *root){

    if(root){
        printf("%d",root->data);
        printRightBoundary(root->left);
    }

    if(root->right){
        printf("%d",root->data);
        printRightBoundary(root->right)
    }
}



void printBoundary(Node *root){
    if(root){

        printf("%d ",root->data);
        printLeftBoundary(root->left);

        printLeaves(root->left);
        printLeaves(root->right);

        printRightBoundary(root->right);


    }
}