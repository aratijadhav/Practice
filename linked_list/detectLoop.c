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

void detectLoop(Node *head){
    Node *slowptr = head;
    Node *fastptr = head;
    int iFlag = 0;

    while(slowptr && fastptr && fastptr->next!=NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr){
            iFlag = 1;
            break;
        }
    }

    if(iFlag == 1)
        printf("\nLoop is present in LL\n");
    else
        printf("\nLoop is not present in LL\n");
}

void findLengthOfLoop(Node *head){
    Node *slowptr = head;
    Node *fastptr = head;
    int iFlag = 0,iCount = 0;

    while(slowptr && fastptr && fastptr->next!=NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr){
            iFlag = 1;
            break;
        }
    }

    if(iFlag == 1){
        fastptr = fastptr->next;
        while(fastptr!=slowptr){
            fastptr = fastptr->next;
            iCount++;
        }
    }

    printf("\nLength of loop %d\n",iCount);
}


int main(){
    Node *head = NULL;

    head = insertNode(head,10);
    head = insertNode(head,20);
    head = insertNode(head,30);
    head = insertNode(head,40);
    head = insertNode(head,50);
    head = insertNode(head,60);
    head = insertNode(head,70);
    printList(head);
    head->next->next->next->next = head; 

    //detectLoop(head);
    fin

    return 0;
}