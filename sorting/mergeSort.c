#include<stdio.h>
#include<malloc.h>


void merge(int arr[],int l,int m,int r){
    int i = 0,j = 0,k = l;
    int n1 = m-l+1;
    int n2 = r-m;

    int left[n1],right[n2];

    
    for(int iCnt = 0;iCnt<n1;iCnt++){
        left[iCnt] = arr[l+iCnt];
    }

    for(int iCnt = 0;iCnt<n2;iCnt++){
        right[iCnt] = arr[m+1+iCnt];
    }


    while((i<n1) && (j<n2)){

        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }

        else{
            arr[k] = right[j];
            j++;
        }

        k++;

    }

    while(i < n1){
        left[i] = arr[k];
        i++;
        k++;

    }

    while(j < n2){
        right[j] = arr[k];
        j++;
        k++;

    }

}

void mergeSort(int arr[],int l,int r){

    if(l<r){

        int mid = l+(r-l)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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

    mergeSort(arr,0,size-1);

    printf("\nAfter sorting \n");
    for(int iCnt = 0;iCnt<size;iCnt++){
        printf("%d ",arr[iCnt]);
    }

    return 0;
}
