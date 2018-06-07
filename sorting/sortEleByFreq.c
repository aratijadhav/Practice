#include<stdio.h>

void countFreq(int arr[],int n){
    int freq[50];
    int count = 0,i = 0,j = 0;
    
    for(i = 0;i < 50;i++){
        freq[i]=-1;
    }
    
    for(i=0; i<n; i++)
        {
            count = 1;
            for(j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;

                    freq[j] = 0;
                }
            }

            if(freq[i] != 0)
            {
                freq[i] = count;
            }
    }


    for(i = 0;i<n;i++){
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}

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
     int arr[] =  {2, 5, 2, 8, 5, 6, 8, 8};
     int n = sizeof(arr)/sizeof(arr[0]);
     int iCnt = 0;

    quickSort(arr,0,n);

    printf("\nAfter sorting \n");
    for(int iCnt = 0;iCnt<n;iCnt++){
        printf("%d ",arr[iCnt]);
    }

    countFreq(arr,n);
    
    return 0;

}