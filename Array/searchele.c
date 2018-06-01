#include<stdio.h>

void SearchEle(int arr[],int start,int end,int val)
{
	printf("\nin function");
	int mid=start+(end-start)/2;
	
	if(arr==NULL)
	{
		return ;
	}

	
	if(start>end)
	{
		return ;
	}

	if(arr[mid]==val)
	{
		printf("Ele %d found at index %d",val,mid);
	}
	
	if(arr[mid]>val)
	{
		return(SearchEle(arr,start,mid,val));
	}
	
	else
	{
		return(SearchEle(arr,mid+1,end,val));
	}

}
		


int main()
{
	int arr[]={1,2,3,4,5};
	int len=sizeof(arr)/sizeof(arr[0]);
	int n=1;

	SearchEle(arr,0,len,n);

	return 0;
}
