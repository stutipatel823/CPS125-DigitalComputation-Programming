/*18    3    2500   3450    1825 
14    2    4800   6000 
-17   0
*/
#include <stdio.h>
int main (void)
{
	int b_num, samples_num, num_orgs_per_100;
	//int b_num, samples_num;
	FILE* in;
	in = fopen("data.txt","r");
	int c = 0;
	int b = 0;
	while(b != -17)
	{
		fscanf(in, "%d",&b);
		
		c++;
		printf("Ci: %d\n", c);	
		
		if(c == 1)
		{
			b_num = b; //set 1st value to b_num
			printf("b_num: %d \n",b_num);
		}
		
		else if(c == 2)
		{
			samples_num = b; //set 2nd value to samples_num
			printf("samples_num = %d\n",samples_num);	
			
			for(int j = 1; j <= samples_num; j++)
			{
				fscanf(in,"%d", &b);
				num_orgs_per_100 = b;
				printf("J: %d Organisms: %d\n",j,num_orgs_per_100);
			}
			c = 0;	
			printf("Cf: %d\n", c);	

		}
		
		printf("B: %d\n",b);
	}
	
}
