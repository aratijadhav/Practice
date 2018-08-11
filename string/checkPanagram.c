#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int x = 32;
void checkPanagram(char *,int);

int main(){

    char str1[] = "The  quick brown fox jumps over the lazy dog";
    //char str1[] = "arati jadhav";
    int str1len = strlen(str1);

    printf("%s %d\n",str1,str1len);

    checkPanagram(str1,str1len);

    return 0;

}

void checkPanagram(char str1[],int size){

    int freq[26],iCnt = 0,iVal=0;

    for(iCnt = 0;iCnt<26;iCnt++){
        freq[iCnt] = 0;
    }

    for(iCnt = 0;iCnt<size;iCnt++){

        
        if(str1[iCnt]>='A' && str1[iCnt]<='Z'){

            iVal = str1[iCnt]-'A';
            

        }
        
        else if(str1[iCnt]>='a' && str1[iCnt]<='z'){
        
            iVal = str1[iCnt]-'a';
        
        }

        
        freq[iVal] = 1;

    }


    int iFlag = 0;
    for(iCnt = 0;iCnt<26;iCnt++){
        printf("%d",freq[iCnt]);
        if(freq[iCnt] == 0)
            iFlag = 1;
            break; 
    }

    if(iFlag == 1)
        printf("\ntrue\n");
    else
        printf("\nFlase\n");
}
