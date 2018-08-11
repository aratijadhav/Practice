#include<stdio.h>
#include<stdlib.h>
#define bool int;


struct node{
    char data;
    struct node *next;
};

struct node *newNode(char data){
    
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    
    if(!nn)
        return NULL;

    nn->next=NULL;
    nn->data = data;

    return nn;
}

void Push(struct node *sobj,int data){
    
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

    if(temp == NULL){
        printf("\nStack is empty\n");
        getchar();
        exit();
    }

    sobj = sobj->next;
    char data = temp->data;
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

bool matchingPair(char c1,char c2){
    if(c1 == "(" && c2 == ")")
        return 1;
    else if((c1 == "[" && c2 == "]"))
        return 1;
    else if((c1 == "{" && c2 == "}"))
        return 1;
    else
        return 0;

}

bool checkParenthesis(char exp[]){
    int i = 0;
    struct node *sobj = NULL;

    while(exp[i]){

        if(exp[i] == '(' ||exp[i] == '[' ||exp[i] == '{' )
            Push(sobj,exp[i]);
        if(exp[i] == ')' ||exp[i] == ']' ||exp[i] == '}' ){

            if(sobj == NULL)
                return 0;

            else if(!matchingPair(Pop(sobj),exp[i]))
                return 0;
        }
        i++;
    }

    if(sobj == NULL)
        return 0;
    return 1;
}


int main(){
    
    
    char exp[20] = "{}";
    if(checkParenthesis(exp))
        printf("\n balanced\n");
    printf("\n not balanced");
    return 0;
}