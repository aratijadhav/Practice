//using recursion
int FindMax(Node *root){

    Node *temp = NULL;
    int max=0;,root_val,left,right;

    while(root!=NULL){
        root_val = root->data;
        left = FindMax(root->left);
        right = FindMax(root->right);

        if(left < right){
            max = right;
        }

        else{
            max = left;
        }

        if(max < root_val){
            max = root_val;
        }
    }

    return max;
}

//without using recursion
int FindMax(Node *root){
    Node *temp = NULL;
    int max = 0;
    struct Q *q = createQ();
    EnQ(q,root);
    while(!isEmpty(q)){
        temp = DeQ(q);
        if(max < temp->data){
            max = temp->data;
        }
        if(temp->left)
            EnQ(q,temp->left);
        if(temp->right)
            EnQ(q,temp->right);
    }
    DeleteQ(q);
    return max;
}