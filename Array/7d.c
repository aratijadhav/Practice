#include<stdio.h>
#include<malloc.h>
int c=100;

int main()
{	
	int *******Arr=NULL;
	int one,two,three,four,five,six,seven,i,j,k,l,m,n,o;

	printf("\nEnter 7 dimension\n");
	scanf("%d%d%d%d%d%d%d",&one,&two,&three,&four,&five,&six,&seven);

	Arr=(int *******)malloc(one*(sizeof(int ******)));

	//initialize memory
	for(i=0;i<one;i++)
		{
		Arr[i]=(int ******)malloc(two*(sizeof(int *****)));
		for(j=0;j<two;j++)
			{
			Arr[i][j]=(int *****)malloc(three*(sizeof(int ****)));
			for(k=0;k<three;k++)
				{
				Arr[i][j][k]=(int ****)malloc(four*(sizeof(int ***)));
				for(l=0;l<four;l++)
					{
					Arr[i][j][k][l]=(int ***)malloc(five*(sizeof(int **)));
					for(m=0;m<five;m++)
						{
						Arr[i][j][k][l][m]=(int **)malloc(six*(sizeof(int **)));
						for(n=0;n<six;n++)
							{
							Arr[i][j][k][l][m][n]=(int *)malloc(seven*(sizeof(int)));
							for(o=0;o<seven;o++)
								{
								Arr[i][j][k][l][m][n][o]=c;
								c++;
								}
							}
						}
						
					}
				}
			}
		}

		
	for(i=0;i<one;i++)
		{
		for(j=0;j<two;j++)
			{
			for(k=0;k<three;k++)
				{
				for(l=0;l<four;l++)
					{
					for(m=0;m<five;m++)
						{
						for(n=0;n<six;n++)
							{
							for(o=0;o<seven;o++)
								{
								printf("%d",Arr[i][j][k][l][m][n][o]);
								}
							}
						}
					}
				}
			}
		}





	return 0;
}

