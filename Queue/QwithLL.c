#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

struct Queue{
    struct node *front,*rare;
};
typedef struct Queue Q;
typedef struct node Node;

Node *createNode(int data){
    Node *nn = (Node *)malloc(sizeof(Node));
    nn->next = NULL;
    nn->data = data;

    return nn;
}

Q *createQueue(){
    Q *q = (Q *)malloc(sizeof(Q));
    q->front = q->rare = NULL;

    return q;
}

void enQueue(Q *q,int data){
    Node *nn = createNode(data);
    
    if(q->rare == NULL){
        q->front = q->rare = nn;
    }

    q->rare->next = nn;
    q->rare = nn;
}

Node *deQueue(Q *q){
    Node *temp = NULL;

    if(q->front == NULL){
        return NULL;
    }


    temp = q->front;
    q->front = q->front->next; 


    if(q->front == NULL)
        q->rare = NULL;
    return temp;

}



int main(){
   struct Queue *q = createQueue(); 
    enQueue(q, 10); 
    enQueue(q, 20); 
    deQueue(q); 
    deQueue(q); 
    enQueue(q, 30); 
    enQueue(q, 40); 
    enQueue(q, 50); 
    Node *n = deQueue(q); 
    if (n != NULL) 
      printf("Dequeued item is %d", n->data); 
    return 0;
}