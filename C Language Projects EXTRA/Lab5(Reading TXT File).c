#include <stdio.h>
int main(void)
{
	FILE* in;
	in=fopen("data.txt","r");
	int b_num=0,num_samples,num_orgs_per_100,sum=0;
	while(b_num!=-17)
	{
		fscanf(in,"%d%d",&b_num,&num_samples);
		printf("%d\t%d\t",b_num,num_samples);
		for(int i=0;i<num_samples;i++)
		{
			fscanf(in,"%d",&num_orgs_per_100);
			printf("%d\t",num_orgs_per_100);
		sum = sum + num_orgs_per_100;
		}
		
		float avg = sum/num_samples*1.0;
		printf("Average: %f\n",avg);
		if(avg<3500)
		{
			printf("Beach is SAFE to be OPENED!");
		}
		else
		{
			printf("Beach CLOSED as it is UNSAFE right now.");
		}
		printf("\n");
	}
	return 0;
}

