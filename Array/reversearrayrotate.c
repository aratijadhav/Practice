//Reverse the rotated array
#include<stdio.h>
#include<malloc.h>

void Rotate(int arr[],int Size,int no)
{
	int iCnt=0,temp=0;
	int i=0,j=Size-1;

	if((arr==NULL)||(Size<=1)||(no>Size))
		{
			return ;
		}
			
			printf("\nOriginal Array\n");
			for(i=0;i<Size;i++)
				{
					printf("%d ",arr[i]);
				}

//logic for array rotation	
	while(iCnt!=no)
		{
			for(i=0;i<Size-1;i++)
				{
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			iCnt++;
		}
			printf("\nAfter Rotate\n");		
			for(i=0;i<Size;i++)
				{
					printf("%d ",arr[i]);
				}

//end logic for array rotation	
}


void ReverseArray(int arr[],int Size)
{
int i=0,j=Size-1,temp=0;
//logic for reverse array
		for(i=0;i<(Size/2);i++,j--)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

			printf("\nAfter Reverse\n");		
			for(i=0;i<Size;i++)
				{
					printf("%d ",arr[i]);
				}


}


void SortedArray(int arr[],int Size)
{
	int i=0,temp=0,j=0;
//sorted array
		for(i=0;i<Size;i++)
			{
				for(j=1;j<i;j++)
			{
				if(arr[i]>arr[i+1])
					{
						temp=arr[i];
						arr[i]=arr[i+1];
						arr[i+1]=temp;
					}
			}
						
			printf("\nAfter Sorting\n");		
			for(i=0;i<Size;i++)
				{
					printf("%d ",arr[i]);
				}

}


int main()
{
	int *ptr=NULL;
	int n=0,i=0,no=0;

	printf("\nEnter the Size of array\n");
	scanf("%d",&n);

	ptr=(int *)malloc(n*(sizeof(int)));

	printf("\nEnter Array Ele\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&ptr[i]);
		}
	
	printf("\nEnter the Number\n");
	scanf("%d",&no);

	Rotate(ptr,n,no);
	ReverseArray(ptr,n);
	SortedArray(ptr,n);


	return 0;
}
