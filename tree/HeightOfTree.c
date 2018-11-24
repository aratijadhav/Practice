#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};


struct node *newNode(int data){
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    if(!nn)
        printf("\nmemory error\n");
    nn->left = NULL;
    nn->right = NULL;
    nn->data = data;

    return nn;
}
void preOrder(struct node *root){
    if(root){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


int getHeight(struct node* root) {
    // Write your code here

    int left=0,right=0;
    if(root == NULL){
        return 0;
    }
    
    left = getHeight(root->left);
    right = getHeight(root->right);

    if(left < right){
        right = (1+right);

        return right;
    }

    else{
        left = 1+left;

        return left;

    }

}



int main(){
    struct node *root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->right->left = newNode(4);
    root->right->right = newNode(6);
    root->right->right->right = newNode(7);
    
    preOrder(root);

    int h = getHeight(root);
    printf("\n%d \n",h-1);
    return 0;
}