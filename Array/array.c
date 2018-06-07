#include<stdio.h>
#include<malloc.h>
int main()
{
	int *arr=NULL;
	int i,pc=0,nc=0,zc=0,s=0;
	float pf=0.0,np=0.0,zp=0.0;
	

	printf("size");
	scanf("%d",&s);
	arr=(int *)malloc(s*sizeof(int));

	for(i=0;i<s;i++)
		{
			scanf("%d",&arr[i]);
		}

	for(i=0;i<s;i++)
		{
			if(arr[i]>0)
				{
				 pc=pc+1;
				 }
			else if(arr[i]<0)
				{
				nc=nc+1;
				}
			else if(arr[i]==0)
				{
				zc=zc+1;
				}
		}

printf("\np=%d n=%d z=%d s=%d",pc,nc,zc,s);

pf=pc/(float)s;
printf("\npf=%f",pf);
np=nc/(float)s;
printf("\nNp=%f",np);
zp=zc/(float)s;
printf("\nzp=%f",zp);
return 0;
}

