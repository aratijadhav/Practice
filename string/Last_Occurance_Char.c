//Accept string And character and return last occurance of character

#include<stdio.h>
#include<string.h>

int Last_Occurance_Char(char *Array,char ch){

    int index = 0,c=0;
    while(*Array != '\0'){

        if(Array[c]==ch){
            index = c;
        }
        c++;
        Array++;
    }

    return index;
}

int main(){

    char Array[20];
    char ch;

    printf("\nEnter String\n");
    scanf("%[^'\n']s",Array);

    printf("\nEnter character\n");
    scanf("%s",ch);
    
    int iResult = Last_Occurance_Char(Array,ch);
    printf("%d",iResult);

    return 0;
}
 