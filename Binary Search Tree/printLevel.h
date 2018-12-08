void printLevel(Node *root,int level){

    if(root == NULL){
        return ;
    }

    if(level == 1){
        printf("%d ",root->data);
    }

    else{
        printLevel(root->left,level-1);
        printLevel(root->right,level-1);
    }
}



void LevelWise(Node *root){

    int iCnt = 0;
    int height = HeightOfTree(root);

    for(iCnt = 1;iCnt <=height;iCnt++){
        printLevel(root,iCnt);
        printf("\n");

    }   

}