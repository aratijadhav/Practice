#include<stdio.h>


void Print_Duplicate_Char(char *String) {

	int icnt = 0,ch = 0,val1=0,val2=0;
	int Small_Char_Freq[26]={0};
	int Capital_Char_Freq[26]={0};
	
	while(String[ch] != '\0') {
	
	if(String[ch] >= 'A' && String[ch] <= 'Z') {
		
		val1 = String[ch] - 'A';
		Capital_Char_Freq[val1]+=1;
	}//END OF IF

	else if(String[ch] >= 'a' && String[ch] <= 'z') {
		
		val2 = String[ch] - 'a';
		Small_Char_Freq[val2]+=1;
	}//END OF IF

		ch++;
	}//END OF WHILE

	for(icnt = 0;icnt<26;icnt++){
		if(Capital_Char_Freq[icnt]==1)
			printf("%c::%d ",icnt+65,Capital_Char_Freq[icnt]);
		else if(Small_Char_Freq[icnt]==1)
			printf("%c::%d ",icnt+97,Small_Char_Freq[icnt]);
	}//end of for
}//END OF FUN
		




int main() {

	char String[30];
	printf("\nEnter String\n");
	scanf("%[^'\n']s",String);
	
	Print_Duplicate_Char(String);
	
	return 0;
}
