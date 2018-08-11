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

int findLength(Node *h1){
    int count = 0;

    while(h1!=NULL){
        count++;
        h1 = h1->next;
    }

    return count;
}

Node *findIntersectionNode(Node *h1,Node *h2){
    int diff = 0,L1 = 0,L2 = 0;
    Node *list1 = h1,*list2 = h2;


    L1 = findLength(h1);
    L2 = findLength(h2);

    if(L1 < L2){
        h1 = list2;
        h2 = list1;
        diff = L2-L1;
    }

    else{
        h1 = list1;
        h2 = list2;
        diff = L1-L2;

    }

    for(int i = 0;i<diff;i++){
        h1 = h1->next;
    }

    while(h1!=NULL && h2!=NULL){
        if(h1 == h2){
            return h1;
        }
        h1 = h1->next;
        h2 = h2->next;
    }

    return NULL;

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
    head = insertNode(head,20);
    head = insertNode(head,50);
    head = insertNode(head,20);
    printList(head);

    return 0;
}