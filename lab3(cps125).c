//Exercise 1
#include <stdio.h>
#include <math.h>
int main ( void )
{
    int a,b,c,d,sum1,sum2,sum_square;
    double sum_all;
    printf( "Enter any four values: \n " );
    scanf( "%d%d%d%d" , & a, & b, & c, & d);
    sum1 = a + b + c + d;
    printf( "Sum of the four values is: %d \n " ,sum1);
    sum2 = (a + b) - (c - d);
    printf("Sum of first two values minus last two values is: %d \n " ,sum2);
    sum_square = (a * a) + (b * b) + (c * c) + (d * d);
    printf( "Sum of square of the numbers is: %d \n " ,sum_square);
    sum_all = sqrt(sum_square) / (sum1 *1.0 );
    printf( "result = %0.2lf" , sum_all);
    return 0 ;
}

//Exercise 2
#include <stdio.h>
int main ( void )
{
    int a = 100 ,b = 200 ,c = 400 , d = 800 ;
    double yA = a *1.094 , yB = b *1.094 , yC = c *1.094 , yD = d *1.094 ;
    double mA = a *0.0006215 , mB = b *0.0006215 , mC = c *0.0006215 ,
    mD = d *0.0006215 ;
    printf( "Meter \t\t Yards \t\t Miles \n " );
    printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,a,yA,mA);
    printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,b,yB,mB);
    printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,c,yC,mC);
    printf( "%d \t\t %0.2lf \t\t %0.2lf \n " ,d,yD,mD);
    return 0 ;
}

//Exercise 3
#include <stdio.h>
#include <math.h>
int main ( void )
{
    int r;
    double volume;
    printf( "Enter the radius: \n " );
    scanf( "%d" , & r);
    volume = ( 4/3.0 ) *3.14* (r * r * r);
    printf( "The volume of sphere is : %0.2lf \n " ,volume);
    return 0 ;
}

//Exercise 4
#include <stdio.h>
int main ( void )
{
    int a1, a2, a3;
    printf( "Enter the measurement of angle 1: \n " );
    scanf( "%d" , & a1);
    printf( "Enter the measurement of angle 2: \n " );
    scanf( "%d" , & a2);
    a3 = 180 - (a1 + a2);
    printf( "The measurement of third angle is: %d \n " ,a3);
    return 0 ;
}

//Exercise 5
int main ( void )
{
    int a,b,sum;
    printf( "Enter the first number: \n " );
    scanf( "%d" , & a);
    printf( "Enter the second number: \n " );
    scanf( "%d" , & b);
    if (a == b)
    {
    sum = a * a * a;
    }
    else
    {
    sum = a + b;
    }
    printf( "The sum of the two values is: %d \n " , sum);
    return 0 ;
}

//Exercise 6
#include <stdio.h>
int main ( void )
{
    int a,b,c;
    printf( "Enter the first number: \n " );
    scanf( "%d" , & a);
    printf( "Enter the second number: \n " );
    scanf( "%d" , & b);
    printf( "Enter the third number: \n " );
    scanf( "%d" , & c);
    if (a > b && b > c)
    {
    printf( "%d \t \%d \t %d" ,a,b,c);
    }
    if (a > c && c > b)
    {
    printf( "%d \t \%d \t %d" ,a,c,b);
    }
    if (b > a && a > c)
    {
    printf( "%d \t \%d \t %d" ,b,a,c);
    }
    if (c > b && b > a)
    {
    printf( "%d \t \%d \t %d" ,c,b,a);
    }
    if (c > a && a > b)
    {
    printf( "%d \t \%d \t %d" ,c,a,b);
    }
    return 0 ;
}
/*
PART II: DISCOVERY ACTIVITIES
    1. Can you explain why 3+5+8 divided by 3 doesn't give the
    correct average of the numbers 3, 5, and 8?
    When we take the average of these numbers, we get a decimal value. Since these
    are integer values, we will get an integer output in the console. So, instead of
    5.333 the console will display 5.
    2. Using your text book, or an Internet search (do not ask
    friends or TA) or simply by experimenting with Geany, explain
    in a few sentences the differences between the division (/)
    and the remainder (%) operators.
    The remainder (%) operator is used to find the remainder. It can also be used to
    define the placeholder. The division (/) operator is used as a division. It can also
    be used as commenting more specifically, single comments.
*/
