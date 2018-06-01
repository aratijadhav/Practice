#include<stdio.h>

int search(int arr[],int n,int key){
    int pivot = findPivot(arr,0,n-1);

    if(pivot == -1)
        return binarySearch(arr,0,n-1,key);
    if(arr[pivot] == key)
        return pivot;
    if(arr[0] <= key)
        return binarySearch(arr,0,pivot-1,key);
    return binarySearch(arr,pivot+1,n-1,key);
    
}

int findPivot(int arr,int low,int high){

    int mid = (high - low)/2;

    if(mid < high && arr[mid] > arr[mid+1])
        return mid;
    if(mid > low && arr[mid] < arr[mid-1])
        return mid-1;
    if(arr[low] >= arr[mid])
        return findPivot(arr,low,mid-1);
    return findPivot(arr,mid+1,high);
    
}


int main(){
    int arr[]={3,4,5,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    search(arr,len);

    return 0;    
}