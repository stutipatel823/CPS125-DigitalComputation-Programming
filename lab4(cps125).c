// Excercise
#include <stdio.h>
int main(void)
{
    int a1, a2, t1, t2;
    double avg;
    char grade = '\0';
    printf("Enter two assignment marks: \n ");
    scanf("%d %d", &a1, &a2);
    printf("Enter two test marks: \n ");
    scanf("%d %d", &t1, &t2);
    avg = (a1 + a2 + t1 + t2) / 4;
    if (avg >= 80)
    {
        grade = 'A';
    }
    else
    {
        if (avg >= 70)
        {
            grade = 'B';
        }
        else
        {
            grade = 'C';
            if (avg >= 50 && avg <= 60)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
    }
    printf("Enter Assignment Grades %d %d \n ", a1, a2);
    printf("Enter Test Grades %d %d \n ", t1, t2);
    printf("Your average is: %lf \n ", avg);
    printf("You grade is: %c \n ", grade);
}