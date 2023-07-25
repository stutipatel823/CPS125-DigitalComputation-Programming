// Exercise 1
#include <stdio.h>
int main (void)
{
    printf ("This\nis\nmy\nfirst\nC\nprogram.\n");
//Exercise 2
    printf("X O X\nX X O\nO O X\n");
    return (0);
}
//Exercise 3
/*Compile Error:
Error 1: inx >> “int”
Error 2: b =4, >> “int b = 4;”
Error 3: e >> “int e;”
Error 4: Double >> “double f = 4”
Error 5: printf(The value of d is %d“\n, d) >> printf(”The value of d is %d\n“, d);
Errors After Fixing:
Error 1: Variable ‘d’ is declared as a double not int so %f should be used instead of %d.
Error 2: There is no purpose of variable ‘e’ as it is not being used anywhere.
Output After Fixing All Errors:
The value of d is 7.000000*/
#include <stdio.h>
int main (void)
{
    int a = 3; int b = 4;
    double f = 4, c, d;
    d = a + b;
    c = a / (f - b);
    printf ("The value of d is %f\n", d);
    return (0);
}

//Exercise 4
#include <stdio.h>
int main (void)
{
    double number;
    printf("Enter a real number: \n");
    scanf("%lf",&number);
    printf("number = %d\n", ((int)number/100)*100);
    printf("number = %d\n", ((int)number/1000)*1000);
    printf("number = %0.1lf\n", number);
    return (0);
}

//Exercise 5
#include <stdio.h>
    int main() {
    double a =0, b = 0;
    double circumference = a*b*3.14159;
    printf("Enter length of long radius: ");
    scanf("%lf", &a);
    printf("Enter length of short radius: ");
    scanf("%lf", &b);
    printf("Circumference of the ellipse is %lf\n", circumference);
    return 0;
}

//Exercise 6
/*
1. Char does not exist (no default setting), char is a variable type.
2. An integer value (‘0’) since %d was put instead or %lf
3. Not valid because 50 is an integer not a double
4. The program does not work without a semicolon in the end. It is a syntax requirement.
5. %f is used for float ad %lf is used for double.
6. Dividing by zero gives a compile error since anything divided by 0 is undefined.
7. No int cannot be divided by a double
8. int main() indicates that an integer value can be returned. The “main()” function will not return
any value.
9. It will convert the integer to a char value
10. 5/3 will result in an integer, 5%3 will also result in an integer, 5.0/3 will result in double (2.5).*/