#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *newNode(int data){
    
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    
    if(!nn)
        return NULL;

    nn->next=NULL;
    nn->data = data;

    return nn;
}

struct node *Push(struct node *sobj,int data){
    
    struct node *nn = newNode(data);

    if(sobj==NULL)
        sobj = nn;

    nn->next = sobj;
    sobj = nn;
    
    return sobj;
}

void PrintTop(struct node *sobj){
    printf("%d",sobj->data);
}

int IsEmpty(struct node *sobj){
    return (sobj==NULL);
}

int Pop(struct node *sobj){
    
    struct node *temp=sobj;

    sobj = sobj->next;
    int data = temp->data;
    free(temp);
    return data;

    
}
void PrintStack(struct node *sobj){
    struct node *temp = sobj;
    while(temp){
        printf("%d=>",temp->data);
        temp = temp->next;
    }
}

int main(){
    
    struct node *sobj = NULL;
    sobj = Push(sobj,10);
    sobj = Push(sobj,20);
    sobj = Push(sobj,30);
    PrintStack(sobj);
    
    PrintTop(sobj);

    printf("\n%d \n",Pop(sobj));

    return 0;
}