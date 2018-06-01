#include<stdio.h>
#include<malloc.h>

void insertionSort(int arr[],int len){
    int minIndex = 0,iCnt = 0,jCnt = 0,temp=0;

    for(iCnt = 0;iCnt<len;iCnt++){
        minIndex = iCnt;
        for(jCnt = iCnt+1;jCnt<len;jCnt++){
            if(arr[jCnt] < arr[minIndex]){
                minIndex = jCnt;
            }
        }
        temp = arr[iCnt];
        arr[iCnt] = arr[minIndex];
        arr[minIndex] = temp;
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
