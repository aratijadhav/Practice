#include<stdio.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL;

BOOL String_Compare(char str1[],char str2[]){

	if((str1 == NULL)||(str2==NULL))
		return FALSE;
	while(*str1!='\0'){
	
	if(*str1 == *str2) {
		str1++;
		str2++;
	}

	else{
		break;
	}
	}//end of while

	if(*str1 == '\0' && *str2 == '\0')
		return TRUE;
	else
		return FALSE;
	

}//end of fun

int main() {
	
	char string1[30];
	char string2[30];
	int iRet = 0;
	fflush(stdin);
	printf("\nEnter string1\n");
	gets(string1);
	
	fflush(stdin);
	printf("\nEnter string2\n");
	gets(string2);
	
	iRet = String_Compare(string1,string2);

	if(iRet==TRUE)
		printf("Equal");
	else
		printf("Not Equal");
	
	
	return 0;
}
