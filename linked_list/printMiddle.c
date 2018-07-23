#include<stdio.h>
#include<stdlib.h>
int freq = 0;
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

void printMiddle(Node *head){
    Node *temp1 = NULL;
    Node *temp2 = NULL;

    temp1 = temp2=head;
    while(temp1&&temp2&&temp2->next){
        temp1=  temp1->next;
        temp2=  temp2->next->next;
    }

    printf("\n%d\n",temp1->data);
}

int count(Node *head,int key){

    if(head==NULL)
        return freq;
    if(head->data == key)
        freq++;

    return count(head->next,key);
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

    printMiddle(head);
    printf("%d\n",count(head,20));
   
    return 0;
}