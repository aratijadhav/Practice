#include<stdio.h>

int Partition(int *a,int start,int end){
    int i=0,temp=0;
    int pivot = a[0];
    int pIndex = start;

    for(i=start;i<end-1;i++){
        if(a[i]>=pivot){
            temp = a[i];
            a[i] = a[pIndex];
            a[pIndex] = temp;
            pIndex += 1;
        }
    }

    return pIndex;

}
void QuickSort(int *a,int start,int end){


    if(start<end){
        int pIndex = Partition(a,start,end);
        QuickSort(a,start,pIndex-1);
        QuickSort(a,pIndex+1,end);
    }

    
}


int main(){

    int array[] = {4,3,2,5,6,1};
    int s = 0;
    int e = sizeof(array)/sizeof(array[0]);
    QuickSort(array,s,e);
    for(int i=s;i<e;i++){
        printf("%d ",array[i]);
    }
    
   
    return 0;
}