#include<stdio.h>
#include<malloc.h>

int Partition(int arr[],int start,int end){

    int pivot = arr[end];
    int pIndex = start,iCnt = 0,temp = 0;


    for(iCnt = start;iCnt < end; iCnt++){
        if(arr[iCnt] <= pivot){
            temp = arr[iCnt];
            arr[iCnt] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    temp = arr[pIndex];
    arr[pIndex] = arr[end];
    arr[end] = temp;

    return pIndex;
}

void quickSort(int arr[],int start,int end){
    if(start < end){
        int pIndex = Partition(arr,start,end);
        quickSort(arr,start,pIndex-1);
        quickSort(arr,pIndex+1,end);
    }
}


int main(){
    int iCnt=0;

    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1);
    
    printf("\nAfter sorting \n");
    for(int iCnt = 0;iCnt<n;iCnt++){
        printf("%d ",arr[iCnt]);
    }

    return 0;
}
