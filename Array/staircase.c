#include<stdio.h>

void Print_staircase(int n)
{
	int i,j,z;
 	for(i=1;i<=n;i++)
		{
			for(j=n-i;j>0;j--)
				{
					printf(" ");

					
				}
			for(j=0;j<i;j++)
				{
					printf("#");
				}
			
				
			printf("\n");
		}
}


int main()
{
	int n;

	printf("\nenter n");
	scanf("%d",&n);

	Print_staircase(n);

return 0;
}
