#include<stdio.h>

struct Queue{
    int front,rear,size;
    int capacity;
    int *array;
};

typedef struct Queue *Q;

