//Accept String From User And One Character And Return Index Of First Occurance Of That Character.

#include<stdio.h>

int First_Occurance_Char(char *Array,char ch){

    int index = 0,c=0;

    while(*Array != '\0') {

        if(Array[c] == ch){
            break;
        }
        index++;
        Array++;
    }

    return (index+1);
}



int main() {

    char Array[20];
    char ch;

    printf("\nEnter String\n");
    scanf("%[^'\n']s",Array);

    printf("\nEnter Character\n");
    scanf("%s",&ch);

    int iResult = First_Occurance_Char(Array,ch);

    printf("\nCharacter Is Present %d Index\n",iResult);

    return 0;
}