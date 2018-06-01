#include<stdio.h>
#include<malloc.h>

void bubbleSort(int arr[],int len){
    int iCnt = 0, jCnt = 0, temp=0, count=0, flag=0;

    for(iCnt = 0;iCnt<len;iCnt++){
        count++;
        flag = 0;
        for(jCnt = 0 ; jCnt<len-iCnt-1;jCnt++){
            if(arr[jCnt] > arr[jCnt+1]){
                temp = arr[jCnt];
                arr[jCnt] = arr[jCnt+1];
                arr[jCnt+1] = temp;
                flag = 1;
            }

        }
        if(flag == 0){
            break;
        }        
        
    }
    printf("counter is:- %d",count);


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

    
    // printf("\nBefore sorting \n");
    // for(int iCnt = 0;iCnt<size;iCnt++){
    //     printf("%d ",arr[iCnt]);
    // }


    bubbleSort(arr,size);

    printf("\nAfter sorting \n");
    for(int iCnt = 0;iCnt<size;iCnt++){
        printf("%d ",arr[iCnt]);
    }

    return 0;
}
