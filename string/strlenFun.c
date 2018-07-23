#include<stdio.h>
#include<stdlib.h>

int Strlen_Function(char *Array) {
    int count = 0;

    if (Array == NULL) {
        return -1;
    }

    while(*Array != '\0') {
        count += 1;
        Array++;
    }

    return (count);
}





int main() {

    char Array[20];
    
    printf("\nEnter String\n");
    scanf("%[^'\n']s",Array);
    printf("%s",Array);

    int Result = Strlen_Function(Array);
    printf("\nLength of Given string is: %d",Result);

    return 0;
}