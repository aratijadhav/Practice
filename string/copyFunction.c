#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void CopyFunction(char *,char *,int);

int main(){

    char *str1 = NULL;
    char *str2 = NULL;
    
    int ilen1=0,ilen2=0,iCnt=0;
    
    printf("\nEnter length of both strings s1 and s2\n");
    scanf("%d %d",&ilen1,&ilen2);
    
    str1 = (char *)malloc(ilen1*sizeof(char));

    if(!str1)
        printf("Memory is not allocated");
   
    printf("\nEnter string1\n");
    for(iCnt = 0;iCnt<=ilen1;iCnt++){
        scanf("%c",&str1[iCnt]);
    }

    str2 = (char *)malloc(ilen2*sizeof(char));

    if(!str2)
        printf("Memory is not allocated");

    printf("\nEnter string1\n");
    for(iCnt = 0;iCnt<=ilen2;iCnt++){
        scanf("%c",&str2[iCnt]);
    }

    CopyFunction(str1,str2,0); 
    printf("%s\n",str2);    

    return 0;
}


void CopyFunction(char s1[],char s2[],int index){
   

    s2[index] = s1[index];

    if(s1[index] == '\0')
        return ;
    CopyFunction(s1,s2,index+1);
    
}