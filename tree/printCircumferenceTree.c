#include<stdio.h>
#include<malloc.h>


struct node {
    int data;
    struct node *left,*right;
};


struct node *newNode(int data){

    struct node *nn = (struct node *)malloc(sizeof(struct node));
    
    if(!nn){
        printf("\nmemory allocation error\n");
        return NULL;
    }

    nn->left = NULL;
    nn->right = NULL;
    nn->data = data;

    return nn;
}

void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void printBoundaryLeft(struct node *root){

    if(root){
        if(root->left){
            printf("%d ",root->data);
            printBoundaryLeft(root->left);
        }

        else if(root->right){
            printf("%d ",root->data);
            printBoundaryLeft(root->right);
        }
    }
}

void printBoundaryLeaves(struct node *root){

    if(root){
        printBoundaryLeaves(root->left);
        if((root->left == NULL) && (root->right==NULL)){
            printf("%d ",root->data);
        }
        printBoundaryLeaves(root->right);

    }
}


void printBoundaryRight(struct node *root){

    if(root){

        if(root->right){
            printf("%d ",root->data);
            printBoundaryRight(root->right);
        }

        else if(root->left){
            printf("%d ",root->data);
            printBoundaryRight(root->left);
        }
    }
}


// function for print boundary of tree
void printBoundary(struct node *root){
    if(root){
        printf("%d ",root->data);
        printBoundaryLeft(root->left);

        printBoundaryLeaves(root->left);
        printBoundaryLeaves(root->right);

        printBoundaryRight(root->right);


    }
}

int main(){
    struct node* root = newNode(20); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
    root->right->right = newNode(25);

    inorder(root);
    printf("\n");
    printBoundary(root); 
    return 0;
}