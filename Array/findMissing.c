#include<stdio.h>

int findMissing(int arr[],int n){

    int sum1 = 0,iCnt = 0;
    
    sum1  = (n+1)*(n+2)/2;

    for(iCnt = 0; iCnt < n; iCnt++){
        sum1-=arr[iCnt];
    }

    return(sum1);

    
}

int main(){

    int arr[] = {1,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

   int result = findMissing(arr,len);

   printf(" Missing number is %d ",result);


    return 0;
}