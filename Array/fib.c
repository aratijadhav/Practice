#include<stdio.h>
#define MAX 100
int arr[MAX];

void Initialize()
{
	for(int i=0;i<MAX;i++)
		{
			arr[i]=-1;
		}
}


int fib(int n)
	{
		if(arr[n]==-1)
			{
				if(n<=1)
					{
						arr[n]=n;
					}
				else
					{
						arr[n]=fib(n-1)+fib(n-2);
					}
			}
		return arr[n];
	}





int main()
{
	int n=40;
	Initialize();
	printf("Fibbonacci No is=%d",fib(n));
	return 0;
}
