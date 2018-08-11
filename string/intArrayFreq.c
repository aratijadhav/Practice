#include<stdio.h>
#include<stdlib.h>

void count_freq(int arr[],int n){
    int counter = 0,max = 0, iCnt = 0,jCnt = 0, val = 0;

    for(iCnt = 0; iCnt < n; iCnt++){
        counter = 0;
        for(jCnt = 0; jCnt < n; jCnt++){
            if(arr[iCnt] == arr[jCnt]){
                counter++;
                val = arr[iCnt];
            }
        }

        if(counter > max){
            max = counter;
        }
    }

    printf("%d occurs %d times in array",val,max);


}




int main(){

    int arr[] = {1,2,3,2,2,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    count_freq(arr,len);
    return 0;
}