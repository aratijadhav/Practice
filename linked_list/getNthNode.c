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

int getNthNode(Node *head,int pos){
    Node *temp = head;
    int icounter = 0;

    while(temp!=NULL){
        if(icounter == pos){
            return temp->data;
        }

        else{
            temp=temp->next;
            icounter++;
        }
    }

    return -1;

}

void getNthNodeFromLast(Node *head,int pos){
    Node *temp=head;
    int iLength = 0,iCnt = 0;

    while(temp!=NULL){
        temp = temp->next;
        iLength++;
    }
    printf("\n%d\n",iLength);

    if(iLength < pos)
        return ; 
    else{
        temp = head;

        for(iCnt = 1;iCnt<iLength-pos+1;iCnt++)
        temp = temp->next;

    }
    printf("%d",temp->data);

}

int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,40);
    printList(head);

    
    getNthNodeFromLast(head,2);

    return 0;
}