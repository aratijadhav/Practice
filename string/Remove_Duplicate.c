#include<stdio.h>


void Remove_Duplicate_Char(char *string) {

	char Result_Array[26] = {0};
	int Small_char[26] = {0};
	int Capital_char[26] = {0};
	int ch = 0,c1 = 0, c2 = 0;

	while(string[ch] != '\0') {

	if(string[ch] >= 'A' && string[ch] <= 'Z') {
		c1 = string[ch] - 'A';
		Capital_char[c1]++;
	}
	
	else if(string[ch] >= 'a' && string[ch] <= 'z') {
		c2 = string[ch] - 'a';
		Small_char[c2]++;
	}	
	
		ch++;
	}//end of while	


	for(ch = 0;ch <26 ;ch++) {
		if(Capital_char[ch]==1){
			Result_Array[ch] = ch+65;
		}

		if(Small_char[ch]==1){
			Result_Array[ch] = ch+97;
		}
	}//end for

	for(ch = 0;ch <26;ch++){
		printf("%c ",Result_Array[ch]);
	}
	printf("\n");

}//end of fun
	
	
int main() {

	char string[30];
	
	printf("\nEnter String\n");
	scanf("%[^'\n']s",string);

	Remove_Duplicate_Char(string);

	return 0;
}
