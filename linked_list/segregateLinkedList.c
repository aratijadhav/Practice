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


Node *segregateLinkedList(Node *head){
    Node *evenStart = NULL;
    Node *evenEnd = NULL;
    Node *oddStart = NULL;
    Node *oddEnd = NULL;
    Node *current = head;

    while(current!=NULL){
        int val = current->data;

        if(val%2 == 0){
            if(evenStart == NULL){
                evenStart = current;
                evenEnd = evenStart;
            }

            else{
                evenEnd->next = current;
                evenEnd = evenEnd->next;
            }
        }

        else{
            if(oddStart == NULL){
                oddStart = current;
                oddEnd = oddStart;
            }

            else{
                oddEnd->next = current;
                oddEnd = oddEnd->next;
            }
        }

        current = current->next;
    }

    if(oddStart == NULL || evenStart == NULL){ 
        return NULL; 
    }

    evenEnd->next = oddStart;
    oddEnd->next = NULL;

    head = evenStart;

    return head;
}


int main(){
    Node *head = NULL;

    head = insertNode(head,1);
    head = insertNode(head,2);
    head = insertNode(head,3);
    head = insertNode(head,2);
    head = insertNode(head,5);
    head = insertNode(head,2);
    printList(head);

    head = segregateLinkedList(head);
    printList(head);

    




    return 0;
}