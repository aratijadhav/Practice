#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0 

int typedef bool;

bool checkPalindrom(char str[],int len){

    int start = 0;
    int end = len-1;
    int flag = 0;

    while(str!='\0'){
        if(end < start){
            //break;
            return flag;
        }

        else{
            if(str[start] == str[end]){
                start+=1;
                end-=1;
                flag = 1;

            }
            else{
                flag = 0;
                return flag;
            }

        }

        
    }

   
}



int main(){

    char arr[] = "ABCCBA";
    int len = strlen(arr);
    bool ret = 1;
    printf(" \n%s %d\n",arr,len);

    ret = checkPalindrom(arr,len);
    if(ret == 0)
            printf("false");
        else
            printf("true");
            

    return 0;
}