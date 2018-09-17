#include<stdio.h>

void printPattern(int n){

    for(int iCnt = 0;iCnt<n;iCnt++){
        for(int jCnt = 0;jCnt<n;jCnt++){
            printf("*");
        }
    }
}

int main(){

    printPattern(4);
    return 0;
}