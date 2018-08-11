#include<stdio.h>
#include<stdlib.h>

struct ArrayStack{
    int top;
    int capacity;
    int *array;
};


struct ArrayStack *createStack(int capacity){

    struct ArrayStack *sobj = (struct ArrayStack *)malloc(sizeof(struct ArrayStack));
    if(!sobj)
        return NULL;
    sobj->capacity = capacity;
    sobj->top=-1;
    sobj->array = (int *) malloc(capacity*sizeof(int));

    if(!sobj->array)
        return 0;
    return sobj;
}

int IsFull(struct ArrayStack *sobj){

    return(sobj->top == sobj->capacity-1);
}

int IsEmpty(struct ArrayStack *sobj){
    return(sobj->top == -1);
}

void Push(struct ArrayStack *sobj,int data){

    if(IsFull(sobj)){
        printf("\nStack is Full\n");
    }

    else{
        sobj->array[++sobj->top] = data;
        printf("\n%d push ele",data);
    }
}

int Pop(struct ArrayStack *sobj){

    if(IsEmpty(sobj))
        printf("\nStack is Empty\n");
    return (sobj->array[sobj->top--]);
    
}

int main(){

    struct ArrayStack *sobj = createStack(5);
    Push(sobj,1);
    Push(sobj,2);
    Push(sobj,3);
    printf("\n%d pop ",Pop(sobj));
    printf("\n%d pop ",Pop(sobj));
    printf("\n%d pop ",Pop(sobj));
    printf("\n%d pop ",Pop(sobj));
    return 0;
}