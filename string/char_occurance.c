//Accept String And One Character From User Count Occurance Of That Character.
#include<stdio.h>

int Char_Occurance(char *Array,char ch) {

    int iCnt = 0,c=0;
    
    while(*Array != '\0'){

        if(Array[c] == ch){
            iCnt += 1;
        }
        Array++;
    }

    return iCnt;
}


int main() {

    char Array[30];
    char ch;

    printf("\nEnter String\n");
    scanf("%[^'\n']s",Array);

    printf("\nEnter Character which is to be Search?");
    scanf("%s",&ch);

    int iResult = Char_Occurance(Array,ch);

    printf("\nGiven Character %c Occurace %d Time in string\n",ch,iResult);

    return 0;

}