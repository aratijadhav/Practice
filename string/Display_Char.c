#include<stdio.h>
#include<stdlib.h>

void Display_Char(char str[]) {
    if(str==NULL)
        return ; 
        
    while(*str!='\0') {
    printf("%c ",*str);
    str++;
    }
}


int main() {

    char Arr[50];

    printf("\nEnter String\n");
    scanf("%[^'\n']s",Arr);

    Display_Char(Arr);
    return 0;

}
