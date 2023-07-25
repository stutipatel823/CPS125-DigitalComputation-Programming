#include <stdio.h>
int checkdiag(int matrix[3][3], int size);
int main(void)
{
	int size = 3;int matrix[size][size]; int q;
	FILE *in;
	in=fopen("matrix1.txt","r");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			fscanf(in,"%d",&matrix[i][j]);
		}
	}
	
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	q=checkdiag(matrix,3);
	if(q==3)
	{
		printf("All diagonals are equal\n");
	}
	else
	{
		printf("All diagonals are not zero\n");
	}
return 0;

}

int checkdiag(int matrix[3][3], int size)
{
	int p,q,r;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			p=matrix[0][0];
			q=matrix[1][1];
			r=matrix[2][2];
		}
	}
if(p==0 && q==0 && r==0)
return(3);
else
return(-1);
}
