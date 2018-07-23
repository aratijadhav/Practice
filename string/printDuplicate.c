#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void printDuplicate(char str[],int len){

    int freq[26] = {0};
    int i = 0;

    for( i = 0; i < 26; i++){
        freq[i] = 0;
    }

    i = 0;
    while(str[i]!='\0'){

        if(str[i] >= 'a'  && str[i] <= 'z'){
            int x = str[i]-'a';
            freq[x]++;
            i++;
        }
    }

    for( i = 0; i < 26; i++){
        if(freq[i] > 1)
            printf(" %c %d  ",str[i],freq[i]);
    }


}


int main(){

    char arr[] = "aratiiiiii";
    int len = strlen(arr);
    printf(" \n%s %d\n",arr,len);

    printDuplicate(arr,len);
    return 0;
}