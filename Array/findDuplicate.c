#include<stdio.h>

void find_duplicate(int arr[],int n){
    int counter = 0,max = 0,iCnt = 0,jCnt = 0,val = 0;

    for(iCnt = 0; iCnt < n; iCnt++){
        counter = 0;
        for(jCnt = 0; jCnt < n; jCnt++){
            if(arr[iCnt] == arr[jCnt]){
                counter++;
                val = arr[iCnt];

            }

        if(counter > max)
            max = counter;
        }

    
    }

    printf("\n%d occurs  %d times in array\n",val,max);
}


int main(){

    int arr[] = {1,2,3,2,1,3,4,5,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    find_duplicate(arr,len);

    return 0;
}