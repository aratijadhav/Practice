#include<stdio.h>
#include<malloc.h>

int main()
{
	int *arr=NULL;
	int max=0,min=0,sum=0,i,flag=0,n,index=0;
	
	printf("\nEnter How Many Elements In Array\n");
	scanf("%d",&n);

	arr=(int *)malloc(n*sizeof(int));

	printf("\nEnter Ele\n");

	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}

	max=arr[0],min=arr[0];
	i=n;
	for(i=0;i<n;i++)
		{
		sum=sum+arr[i];
		if(arr[i]>max)
			{
			max=arr[i];
			}
		else if(min>sum)
			{
			min=arr[i];
			}
			
		}

		printf("%d %d",sum-max,sum-min);

		return 0;
}




