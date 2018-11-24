#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int Bool;


struct node{
    int data;
    struct node *left,*right;
};


struct node *createNode(int data){
    struct node *nn = NULL;

    nn = (struct node *)malloc(sizeof(struct node));
    nn->left = NULL;
    nn->right = NULL;
    nn->data = data;

    return nn;

}


struct node *insertNode(struct node *root,int data){

    struct node *nn = NULL;

    nn = createNode(data);

        if (root == NULL)
            return nn;
    
        if (root->data > data){
            root->left = insertNode(root->left,data);
        }

        else if(root->data < data){
            root->right = insertNode(root->right,data);
        }


    return root;
}

struct node *searchVal(struct node *root,int key){
    if(root == NULL)
        return NULL;
    if(root->data == key )
        return root;
    else if(root->data > key)
        return searchVal(root->left,key);
    else if(root->data < key)
        return searchVal(root->right,key);
   
}

int height(struct node *root){
    int left = 0,right = 0;

    if(root == NULL)
        return 0;
    
    else{
    
        if(root->left){
            left = height(root->left);
        }

        else if(root->right){
            right = height(root->right);
        }
    
        if(left > right)
            return left+1;
        else    
            return right+1;
    }
}

void printGivenLevel(struct node *root,int level){

    if(root == NULL)
        return ;
    if(level == 1)
        printf(" %d ",root->data);
    else if(level > 1){
        printGivenLevel(root->left,level-1);
        printGivenLevel(root->right,level-1);
    }
}


void printLevel(struct node * root){
    int h = height(root);
    int i=0;

    for(i = 1;i<=h;i++){
        printGivenLevel(root,i);
        printf("\n");
    }
}

struct node *FindMin(struct node *root){

    while(root->left!=NULL){
        root = root->left;
    }

    return root;
}


struct node *FindMax(struct node *root){

    while(root->right!=NULL){
        root = (root->right);
    }

    return root;
}


struct node *delete(struct node *root,int key){
    
    if(root == NULL)
        return root;
    else if(root->data > key)
        root->left = delete(root->left,key);
    else if(root->data < key)
        root->right = delete(root->right,key);
    else{

        if((root->left == NULL) && (root->right == NULL)){
            free(root);
            root = NULL;
        }

        else if(root->left == NULL){
            struct node *temp = root;
            root = root->right;
            free(temp);
        }

        else if(root->right == NULL){
            struct node *temp = root;
            root = root->left;
            free(temp);
        }

        else {
            struct node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = delete(root->right,temp->data);
        }
    }
    
    return root;
}


void preOrder(struct node *root){

    if(root){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


int main(){
    struct node *root = NULL,*t=NULL;
    int temp = 0;
    root = insertNode(root,100);
    insertNode(root,200);
    insertNode(root,50);
    insertNode(root,30);
    insertNode(root,40);
    insertNode(root,150);
    insertNode(root,250);
    
    printf("\nPreOrder Traversal\n");
    preOrder(root);

    // if(searchVal(root,20)
    //     printf("\n Given value found in BST");

    // else
    //     printf("\nGiven value not found in BST");
    
    temp = height(root);
    printf("\nHeight of tree %d \n",temp);

    printf("\nPrint tree level wise\n"); 
    printLevel(root);

    printf("\nDelete Node\n");
    delete(root,200);
    printf("\n");
    preOrder(root);

    t = FindMax(root);
    printf("\n %d ",t->data);

    t = FindMin(root);
    printf("\n %d ",t->data);


    return 0;
}