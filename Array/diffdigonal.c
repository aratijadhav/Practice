#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
 int row=0,col=0,m1[10][10],ir=0,ic=0,sum1=0,sum2=0;
 int ians=0;

 printf("\nEnter Number of Rows\n");
 scanf("%d",&row);


 printf("\nEnter Number of Cols\n");
 scanf("%d",&col);

printf("\nEnter Ele\n");
for(ir=0;ir<row;ir++)
	{
 		for(ic=0;ic<col;ic++)
 			{
	 			scanf("%d",&m1[ir][ic]);
			}
	}



for(ir=0;ir<row;ir++)
	{
		 for(ic=0;ic<col;ic++)
 			{
		
				printf("%d\t",m1[ir][ic]);
			}
		printf("\n");
		
	}



printf("\nT->D\n");
for(ir=0;ir<row;ir++)
	{
		 for(ic=0;ic<col;ic++)
 			{
				if(ir==ic)
					{
						sum1=sum1+m1[ir][ic];
					}
			}
		printf("\n");
		
	}

printf("sum1=%d",sum1);


printf("\nD->T\n");
for(ir=0;ir<row;ir++)
	{
		 for(ic=0;ic<=col;ic++)
 			{
				if(ir==(col-ic))
					{
						sum2=sum2+m1[ir][ic-1];
					}
			}
		printf("\n");
		
	}
printf("sum2=%d",sum2);


ians=abs(sum1-sum2);
printf("\nDifference is %d \n",ians);


return 0;
}
