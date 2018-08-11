#include<stdio.h>

void chunk(int s,int e,char str[]){
    int i = 0;
    printf("\n");
    for(i=s;i<e;i++){
        printf("%c",str[i]);
    }
}

int main(){
    int i=0;
    char str[] = "abcdefghijklmnopqrstuvwx";

    for(i=0;i<24;i=i+6){
        chunk(i,i+6,str);
    }

    return 0;

}