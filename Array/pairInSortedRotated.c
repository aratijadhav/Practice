#include<stdio.h>

void pairInArray(int arr[],int n,int x){

    int iCnt = 0,start = 0,end = 0;

    for(iCnt = 0;iCnt<n;iCnt++){
        if(arr[iCnt]>arr[iCnt+1]){
            break;
        }
    }

    start = (iCnt+1)%n;
    end = iCnt;
    printf("\nstart = %d end = %d\n",start,end);

    while(start!=end){

        if(arr[start]+arr[end] == x){
            printf("\n%d %d Pair found\n",arr[start],arr[end]);
        }

        if(arr[start]+arr[end] < x){
            start = (start+1)%n;
            printf("\ns=%d e=%d\n",start,end);
        }
        else{
            end = (n+end-1)%n;
            printf("\ns=%d e=%d\n",start,end);
            
        }

    }
}


int main(){
    int arr[]={3,4,5,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
    pairInArray(arr,len,x);

    return 0;    
}