#include<stdio.h>

void printPattern1(int n){
    int iCnt = 0,jCnt = 0;
    int count = n;
    while(count!=0){
        for(jCnt = n;jCnt>=1;jCnt--){
           for(iCnt = 1;iCnt<=count;iCnt++){
               printf("%d ",jCnt);
           }
        }
        count = count - 1;
        printf("\n");
    }
    
}


void printPattern2(int n){
    int iCnt = 0,jCnt = 0;

    for(iCnt = 0;iCnt < n;iCnt++){
        for(jCnt = 0;jCnt <= iCnt;jCnt++){
            printf("*");
        }
        printf("\n");

    }
}

void printPattern3(int n){
    int iCnt = 0,jCnt = 0;

    for(iCnt = 0;iCnt < n;iCnt++){
        for(jCnt = 0;jCnt < n;jCnt++){
            printf("*");
        }
        printf("\n");

    }
}

void printPattern4(int n){
    int iCnt = 0,jCnt = 0;

    for(iCnt = 1;iCnt <= n;iCnt++){
        for(jCnt = n;jCnt>=iCnt;jCnt--){
            printf(" ");
        }

        for(int k=1;k<=iCnt;k++){
            printf("*");
        }

        printf("\n");
    }
}

void printPattern5(int n){
    int i,j,k;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }

        for(k = i+1;k<=n;k++){
            printf("*");
        }

        printf("\n");
    }
}

void printPattern6(int n){
    int iCnt = 0,jCnt = 0;

    for(iCnt = 1;iCnt <= n;iCnt++){
        for(jCnt = 1;jCnt<=n-iCnt;jCnt++){
            printf("*");

        }
        printf("\n");
    }
}

void printPattern7(int n){
    int iCnt = 0,jCnt = 0,t=0;

    for(iCnt = 1;iCnt <= n;iCnt++){
        for(jCnt = t;  jCnt < n; jCnt++){
            printf(" ");
        }
        for(int k = 1;k<iCnt;k++){
            printf("*");
            t=t+1;
        }

        printf("\n");
    }
}


int main(){
    printPattern7(5);
    return 0;
}