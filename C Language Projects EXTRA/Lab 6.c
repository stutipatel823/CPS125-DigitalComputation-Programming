#include <stdio.h>
int fQ(int x);
int fR(int x);
int fN(int *x_address);
int main(void)
{
int n, r, q, n_value;
	do 
	{
		printf("Enter a number: \n");
		scanf("%d",&n);
	} while (n<=10 || n>=99);
	
	q=n/10;
	r=n%10;
	printf("Ten's of number is %d\n", q);
	printf("Remainder is %d\n", r);
	return 0;	

	do 
	{
		printf("Enter a number: \n");
		scanf("%d",&n);
	} while(n<=10 || n>=99);
	q = fQ(n);
	printf("Ten's of number is %d\n", q);
	
	r = fR(n);
	printf("Remainder is %d\n", r);
	
	n_value = fN(&n);
	return 0;
}
int fQ(int x)
{
	int Q;
	Q = x/10;
	return(Q);
}
int fR(int x)
{
	int R;
	R = x%10;
	return(R);
}
int fN(int *n_address)
{
	return (*n_address);
}
