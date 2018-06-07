#include<stdio.h>

void find_SmallAndLargeNo(int arr[],int n){
    int maxNo  = arr[0];
    int minNo  = arr[0];
    int i = 0;

    for(i = 0; i < n;i++){

        if(arr[i] > maxNo) {
            maxNo = arr[i];
        }

        else if(arr[i] < minNo){
            minNo = arr[i];
        }
    }

    printf("\n%d %d \n",maxNo,minNo);


}

int main(){

    int arr[] = {1,2,3,2,1,3,4,5,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    find_SmallAndLargeNo(arr,len);

    return 0;
}