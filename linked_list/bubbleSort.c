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

int countLength(Node *head){
    Node *temp = head;
    int iCounter = 0;

    while(temp!=NULL){
        temp = temp->next;
        iCounter++;
    }

    return iCounter;
}

Node *bubbleSort(Node *head){

    Node *firstPtr = NULL;
    Node *secondPtr = NULL;
    Node *temp = head;
    
    int swap = 0;

    for(firstPtr = temp;firstPtr!=NULL;firstPtr = firstPtr->next){
        for(secondPtr = head;secondPtr < firstPtr;secondPtr = secondPtr->next){

            if(secondPtr->data > secondPtr->next->data){

                swap = secondPtr->data;
                secondPtr->data = secondPtr->next->data;
                secondPtr->next->data = swap;
            }

        }
    }



    return head;
}

int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,20);
    head = insertNode(head,50);
    head = insertNode(head,20);
    printList(head);

    head = bubbleSort(head);
    printList(head);

    return 0;
}