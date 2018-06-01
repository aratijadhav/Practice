#include<stdio.h>
#include<string.h>

void RotateCyclic(int arr[],int n){
    int iCnt = 0, val = 0;
    
    val = arr[n-1];
    
    for(iCnt = n-1;iCnt>=0;iCnt--){
        arr[iCnt] = arr[iCnt-1];
    
    }
    
    arr[0] = val;

    for(iCnt = 0;iCnt<n;iCnt++){
        printf("%d",arr[iCnt]);
    }
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);    
    //printf("%d",n);
    RotateCyclic(arr,n);

    return 0;
}