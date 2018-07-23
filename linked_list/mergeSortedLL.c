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


Node *mergeSortedLL(Node *h1,Node *h2){

    if(!h1)
        return h1;
    if(!h2)
        return h2;

    Node *c1 = h1;
    Node *p1 = c1->next;
    Node *c2 = h2;
    Node *p2 = c2->next;

    while(p1 && p2){

        if(c2->data > c1->data && c2->data < p1->data){
            
            p2 = c2->next;
            c1->next = c2;
            c2->next = p1;

            c1 = c2;
            c2 = p2;
        }

        else{

            if(p1->next){
                p1 = p1->next;
                c1 = c1->next;
            }

            else{
                p1->next = c2;
                return h1;
            }
        }
    }    
    
    return h1;
    
}

Node *merge(Node *h1,Node *h2){

    if(!h1)
        return h2;
    if(!h2)
        return h1;
    
    if(h1->data < h2->data) 
        return mergeSortedLL(h1,h2);
    else
        return mergeSortedLL(h2,h1);
}


int main(){
    Node *head1 = NULL;

    head1 = insertNode(head1,1);
    head1 = insertNode(head1,3);
    head1 = insertNode(head1,5);
    head1 = insertNode(head1,7);
    head1= insertNode(head1,9);
    head1 = insertNode(head1,11);
    printList(head1);

    Node *head2 = NULL;

    head2 = insertNode(head2,2);
    head2 = insertNode(head2,4);
    head2 = insertNode(head2,6);
    head2 = insertNode(head2,8);
    head2 = insertNode(head2,10);
    head2 = insertNode(head2,12);
    printList(head2);


    head1 = merge(head1,head2);
    printList(head1);
    return 0;
}