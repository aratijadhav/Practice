#include<stdio.h>

int Count_Small_Char(char *Array) {

    int count = 0,ch = 0;

    if (Array == NULL)
        return -1;
    
    while(*Array != '\0'){

        if(Array[ch] >= 'a' && Array[ch] <= 'z') {
            count += 1;
        }
        Array++;
    }

    return count;
}

int main() {

    char Array[20];
    printf("\nEnter String\n");
    scanf("%[^'\n']s",Array);

    int Result = Count_Small_Char(Array);

    printf("\nGiven String Contains %d Small Character",Result);

    return 0;
}