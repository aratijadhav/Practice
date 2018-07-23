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

Node *removeDuplicate(Node *head){
    Node *temp = head;
    Node *temp1 = NULL;

    for(;temp!=NULL;temp = temp->next){

        temp1 = temp->next;

        if(temp->data = temp1->data){
            temp->next = temp1->next;
            free(temp1);
        }

    }

    return head;

}

int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,10);    
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,30);
    head = insertNode(head,40);
    head = insertNode(head,50);
    head = insertNode(head,50);

    head = removeDuplicate(head);
    printList(head);

    return 0;
}