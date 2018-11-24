#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left,*right;
};

typedef struct node Node;


Node *insertEle(Node *root,int data){
    Node *temp = NULL;
    Node *nn = (Node *) malloc(sizeof(Node));
    nn->next =  NULL;
    nn->data = data;

    struct Queue *Q;

    if(root == NULL){
        root = nn;
    }

    Q = createQ();
    EnQ(Q,root);
    while(!isEmptyQ(Q)){
        temp = DeQ(Q);

        if(temp->left)
            EnQ(root,Q);
        else{
            temp->left = nn;
            DeleteQ(Q);
            return ;
        }

        if(temp->right)
            EnQ(root,Q);
        else{
            temp->right = nn;
            DeleteQ(Q);
            return ;
        }
    }
}

void preOrder(struct node *root){

    if(root){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    Node *root = NULL;

    root = insertEle(root,1);
    root = insertEle(root,2);
    root = insertEle(root,3);
    root = insertEle(root,4);
    root = insertEle(root,5);
    root = insertEle(root,6);
    root = insertEle(root,7);

    preOrder(root);



}