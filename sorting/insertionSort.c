#include<stdio.h>
#include<malloc.h>

void insertionSort(int arr[],int len){
    int index = 0,val = 0,iCnt=0;

    for(iCnt = 1;iCnt<len;iCnt++){
        val = arr[iCnt];
        index = iCnt;
        while((index>0) && (arr[index-1]>val)){
            arr[index] = arr[index-1];
            index = index-1;
        }
        arr[index] = val;
    }
}

int main(){
    int *arr=NULL;
    int size = 0,iCnt=0;

    printf("\nEnter size of array\n");
    scanf("%d",&size);
    
    arr = (int *)malloc(size*sizeof(int));

    printf("\nEnter array ele\n");
    for(iCnt = 0;iCnt < size;iCnt++){
        scanf("%d",&arr[iCnt]);
    }

    
    printf("\nBefore sorting \n");
    for(int iCnt = 0;iCnt<size;iCnt++){
        printf("%d ",arr[iCnt]);
    }


    insertionSort(arr,size);

    printf("\nAfter sorting \n");
    for(int iCnt = 0;iCnt<size;iCnt++){
        printf("%d ",arr[iCnt]);
    }

    return 0;
}
