#include<stdio.h>
#define True 0
#define False 1
typedef int Bool;

Bool CheckHappyNumber(int iNo){

    int iSum = 0,iDigit = 0;
    while(iSum != 1 && iSum < 10){
        iSum = 0;
        while(iNo>0){
            iDigit = iNo%10;
            iSum = iSum + (iDigit * iDigit);
            iNo = iNo/10;
        }
        iNo = iSum;
    }

    if(iSum == 1)
        return True;
    else
        return False;
}

int main(){
    Bool iRet = True;
    int n = 0 ;
    
    printf("\nEnter Number To be checked\n");
    scanf("%d",&n);

    if(CheckHappyNumber(n)==True)
        printf("\nTrue");
    else
        printf("\nFalse");
    
    return 0;
}