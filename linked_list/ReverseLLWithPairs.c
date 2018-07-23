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

Node *ReversePairs(Node *head){
    Node *temp1 = NULL,*temp2 = NULL,*current = head;

    while(current!=NULL && current->next!=NULL){
       
        if(temp1!=NULL){
            temp1->next->next = current->next;
        }
        temp1 = current->next;
        current->next = current->next->next;
        temp1->next = current;

        if(temp2 == NULL){
            temp2 =temp1;
        }

        current = current->next;
    }

    return temp2;
}

void printList(Node *head){
    
    Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");
}


int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,40);
    head = insertNode(head,50);
    printList(head);

    head = ReversePairs(head);
    printList(head);
    return 0;
}