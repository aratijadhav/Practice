#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int findLen(char str[]){

    return strlen(str);
}





int main(){

    char str1[] = "arati";
    char str2[] = "jadhav";
    int len_str1 = findLen(str1);
    int len_str2 = findLen(str2);

    printf(" \n%s %d %s %d\n",str1,len_str1,str2,len_str2);



    return 0;
}
