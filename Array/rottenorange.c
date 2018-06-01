#include<stdio.h>
#include<malloc.h>


int main()
{
	int **mat=NULL;
	int row=0,col=0,i=0,j=0;

	printf("\nEnter Value Of Row And Col:-\n");
	scanf("%d%d",&row,&col);

	//memory for 2D array
	mat=(int **)malloc(row*(sizeof(int *)));

	for(i=0;i<row;i++)
		{
			mat[i]=(int *)malloc(col*(sizeof(int)));
		}
	

	//insert value


			
				mat[0][0]=2;
				mat[0][1]=1;
				mat[0][2]=1;
				mat[0][3]=1;
				mat[0][4]=2;
			

				mat[1][0]=1;
				mat[1][1]=0;
				mat[1][2]=0;
				mat[1][3]=2;
				mat[1][4]=1;

				mat[2][0]=1;
				mat[2][1]=0;
				mat[2][2]=1;
				mat[2][3]=0;
				mat[2][4]=1;


			
		

	//print value
	printf("\nBefor\n");
	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}




//for first row

	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
			{
			if((i==0)&&(j==0))
				{
				if(mat[i][j]==2)
					{
				
				
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					 if(mat[i][j+1]==1)
						{
						mat[i][j+1]=2;
						}
					}
				}//end of if i=0 j=0


			 else if((i==0)&&(j==1)||(i==0)&&(j==2)||(i==0)&&(j==3))
				{
				if(mat[i][j]==2)
					{
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					if(mat[i][j+1]==1)
						{
						mat[i][j+1]=2;
						}
					}
				}//elseif

			else if((i==0)&&(j==col-1))
				{
				if(mat[i][j]==2)
					{
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					}
				}//else if i=0 j=4
//for middle row
			else if((i==1)&&(j==0))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					}
				}

			else if((i==1)&&(j==1)||(i==1)&&(j==2)||(i==1)&&(j==3))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					if(mat[i][j+1]==1)
						{
						mat[i][j+1]=2;
						}
					}
				}

			else if((i==1)&&(j==col-1))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i+1][j]==1)
						{
						mat[i+1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					}
				}

			//end of midddle




//last row
			else if((i=row-1)&&(j==0))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i][j+1]==1)
						{
						mat[i][j+1]=2;
						}
					}
				}//else if i=3 j=0


			else if((i==row-1)&&(j==1)||(i==row-1)&&(j==2)||(i==row-1)&&(j==3))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					if(mat[i][j+1]==2)
						{
						mat[i][j+1]=2;
						}
					}	
				}//else row=4 j=1,2,3



			else if((i=row-1)&&(j=col-1))
				{
				if(mat[i][j]==2)
					{
					if(mat[i-1][j]==1)
						{
						mat[i-1][j]=2;
						}
					if(mat[i][j-1]==1)
						{
						mat[i][j-1]=2;
						}
					}
				}//else i=3 j=4
		
	
			}//end for j
		}//end for i


	//print value
	printf("\nAfter\n");
	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
			{
				printf("%d\t",mat[i][j]);
			}
			printf("\n");
		}
	return 0;
}
