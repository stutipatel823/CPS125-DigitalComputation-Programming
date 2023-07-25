#include <stdio.h>
#include <stdlib.h>
int count_zeros(int arr[], int size);
int count_neg(int arr[], int size);
int main(void)
{
FILE *in;
in=fopen("arr.txt","r");
int how_many,c;
int *ptr_1=NULL, *arr;
fscanf(in,"%d",&how_many);
*ptr_1 = 7;
printf("Value of ptr_1 is %d\n",*ptr_1);
arr=(int*)malloc(sizeof(int)*5);
printf("Enter five elements\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d", arr+i); /* "arr+1" same as "&arr[i]"*/
	}
printf("Elements are\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(arr+1)); /* "arr+1" same as "&arr[i]"*/
	}
free(arr);
arr=(int*)malloc(sizeof(int)*how_many);
	for(int i=0; i<4;i++)
	{
		fscanf(in,"%d",(arr+i)); /* "arr+1" same as "&arr[i]"*/
	}
c=count_zeros(arr,5);
printf("Num of zeros: %d\n",c);
c=count_neg(arr,5);
printf("Num of negatives: %d\n",c);
return 0;
}

int count_zeros(int arr[], int size)
{
	int c=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]==0)
		c++;
	}
return(c);
}

int count_neg(int arr[], int size)
{
	int c=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]<0)
		c++;
	}
return(c);
}
