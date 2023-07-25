// Part1: UserInput
#include <stdio.h>
int main(void)
{
    int a, b_num, num_samples, num_orgs_per_100, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("number=%d \n ", a);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        printf("number=%d \n ", a);
    }
    printf("Enter a Beach Number, Number of Total Samples, Number of Organisms per 100ml of water. \n ");
    scanf("%d %d %d", &b_num, &num_samples, &num_orgs_per_100);
    printf("Beach number = %d, number of Samples = %d and Number of Organism per 100ml of water = %d,", b_num, num_samples, num_orgs_per_100);
    for (int i = 0; i < num_samples; i++)
    {
        printf("Enter Number of Organisms per 100ml of water \n ");
        scanf("%d", &num_orgs_per_100);
        printf("organisms = %d \n ", num_orgs_per_100);
        sum = sum + num_orgs_per_100;
    }
    float avg = sum / num_samples * 1.0;
    printf("Average: %f \n ", avg);
    if (avg < 3500)
    {
        printf("Beach is SAFE to be OPENED!");
    }
    else
    {
        printf("Beach CLOSED as it is UNSAFE right now.");
    }
    printf(" \n ");
}

// Part2: Read_.txt_File
#include <stdio.h>
int main(void)
{
    FILE *in;
    in = fopen("data.txt", "r");
    int b_num = 0, num_samples, num_orgs_per_100, sum = 0;
    float avg;
    while (b_num != -17)
    {
        fscanf(in, "%d%d", &b_num, &num_samples);
        printf("%d \t %d \t ", b_num, num_samples);
        for (int i = 0; i < num_samples; i++)
        {
            fscanf(in, "%d", &num_orgs_per_100);
            printf("%d \t ", num_orgs_per_100);
            sum = sum + num_orgs_per_100;
        }
        avg = sum / num_samples * 1.0;
        printf("Average: %f \n ", avg);
        if (avg < 3500)
        {
            printf("Beach is SAFE to be OPENED!");
        }
        else
        {
            printf("Beach CLOSED as it is UNSAFE right now.");
        }
        printf(" \n ");
    }
    return 0;
}