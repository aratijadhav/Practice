//Accept Array and 1 number from user and rotate array

#include<stdio.h>
#include<malloc.h>


void RotateArray(int *arr,int Size,int n)
{
 	int i=0,icnt=0,temp=0;
	for(i=0;i<Size;i++)
		{
			printf("%d",arr[i]);
		}
	while(n!=icnt)
		{
			for(i=0;i<Size-1;i++)
				{
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			icnt++;
		}
	printf("\n");
	for(i=0;i<Size;i++)
		{
			printf("%d",arr[i]);
		}
	
}



int main()
{
	int *ptr=NULL;
	int n=0,i=0,no=0;

	printf("\nEnter the Size of Array\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*(sizeof(int)));

	printf("\nEnter Ele\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&ptr[i]);
		}
	printf("\nEnter n");
	scanf("%d",&no);
	RotateArray(ptr,n,no);

	return 0;
}

