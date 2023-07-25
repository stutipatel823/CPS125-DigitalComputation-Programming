Now slightly modify the for loop code as follows. Continue to use the scanf line to read in the number of samples into the variable num_samples, before the for loop code. However, this time have each read place each value into the variable named num_orgs_per_100 ... and then, as before, print out each in the second line of the compound statement. (Note that each subsequent read will overwrite the value in num_orgs_per_100 from the previousread, just as happened in the previous section. We will do something different with those values, below.)

#include <stdio.h>
int main (void)
{
	int number;
	printf("Enter a number: \n"); //remove this later
	scanf("%d", &number);
	printf("The number is: %d \n", number);
	
	for(int i = 1; i<= 5; i++)
	{
		printf("%d ", i);
		}
		return 0;
		
	int b_num; samples_num; num_orgs_per_100;
	printf("Enter three values: \n"); //remove this later
	scanf("%d %d %d", &b_num, &samples_num, &num_orgs_per_100 );
	
	for(int j = 1; j <= num_samples; j++)
	{
		printf("Enter a number: \n"); //remove this later
		scanf("%d",&num_orgs_per_100);
		printf("%d\n",num_orgs_per_100);

		}
/*printf( "Meter \t\t Yards \t\t Miles \n " );
printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,a,yA,mA);
printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,b,yB,mB);
printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,c,yC,mC);
printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,d,yD,mD);*/
	
	}

