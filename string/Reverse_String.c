#include<stdio.h>


void Reverse_String(char str[]) {

	char *start,*end,temp;

	while(*str!='\0') {
	
		if(*str == ' '){
			while(*str == ' ' && *str!='\0'){
				str++;
			}
		}
		else {
		
			start = str;
			while(*str!= '\0' && *str!= '\0'){
				str++;
			}
			end = str-1;
		}
		
		while(start<end) {
			
			temp = *start;
			*start = *end;
			*end = temp;
		
			start++;
			end--;
		}
	}
			
			

}//end of fun

int main() {

	char string[30];
	
	printf("\nEnter string\n");
	scanf("%[^'\n']s",string);

	Reverse_String(string);

	printf("%s",string);
	
	return 0;
}
