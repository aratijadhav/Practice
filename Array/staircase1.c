#include<stdio.h>


void stair(int n)
{
	
	int i,j;

	for(i=1;i<=n;i++)
		{
			for(j=n-i;j>0;j--)
				{
					printf(" ");
				}
			for(j=0;j<i;j++)
				{
					printf("*");
				}
			
		printf("\n");
		}
}
int main()
{
	int n;

	printf("\nenter number");
	scanf("%d",&n);

	stair(n);

	return 0;
}
