#include<stdio.h>
#include<malloc.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};

	printf("%d",(sizeof(arr)/sizeof(arr[0])));

	return 0;
}

