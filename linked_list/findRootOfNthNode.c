#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;

Node *createNode(int data){

    Node *nn = (Node *)malloc(sizeof(Node));
   
    nn->next = NULL;
    nn->data = data;

    return nn;
}

Node *insertNode(Node *head,int data){
    
    Node *nn = createNode(data);
    Node *temp = head;

    if(head == NULL)
        head = nn;
    else{
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }

        temp->next = nn;
    }

    return head;
}

void printList(Node *head){
    
    Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");
}

Node *findRoot(Node *head){
    Node *sqrtNode = NULL;
    int i=1,j=1;

    for(;head!=NULL;head = head->next){
        if(i==j*j){
            if(sqrtNode == NULL){
                sqrtNode = head;
            }
            else{
                sqrtNode = sqrtNode->next;
            }
            j++;
        }
        i++;
    }

    return sqrtNode;
}

int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,20);
    head = insertNode(head,50);
    head = insertNode(head,20);
    head = insertNode(head,20);
    head = insertNode(head,20);
    head = insertNode(head,20);
    head = insertNode(head,20);
    printList(head);

    head = findRoot(head);
    printf("\n%d\n",head->data);;


    return 0;
}