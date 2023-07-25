// Part1: Without Functions
#include <stdio.h>
int main(void)
{
    int n, r, q;
    do
    {
        printf("Enter a number: \n ");
        scanf("%d", &n);
    } while (n <= 10 || n >= 99);
    q = n / 10;
    r = n % 10;
    printf("Ten's of number is %d \n ", q);
    printf("Remainder is %d \n ", r);
    return 0;
}

// Part2: With Functions
#include <stdio.h>
int fQ(int x);
int fR(int x);
int fN(int *x_address);
int main(void)
{
    int n, r, q, n_value;
    do
    {
        printf("Enter a number: \n ");
        scanf("%d", &n);
    } while (n <= 10 || n >= 99);
    q = fQ(n);
    printf("Ten's of number is %d \n ", q);
    r = fR(n);
    printf("Remainder is %d \n ", r);
    n_value = fN(&n);
    return 0;
}
int fQ(int x)
{
    int Q;
    Q = x / 10;
    return (Q);
}
int fR(int x)
{
    int R;
    R = x % 10;
    return (R);
}
int fN(int *n_address)
{
    return (*n_address);
}

// Part3
#include <stdio.h>
int f4(int x, int *add1, int *add2);
int main(void)
{
    int n, r, q, n_value;
    do
    {
        printf("Enter a number: \n ");
        scanf("%d", &n);
    } while (n <= 10 || n >= 99);
    f4(n, &q, &r);
    return 0;
}
int f4(int x, int *add1, int *add2)
{
    *add1 = x / 10;
    *add2 = x % 10;
    printf("Ten's of the number is: \n ", *add1);
    printf("Remainder: %d \n ", *add2);
}
/*
1. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with C, explain in a few
sentences the difference between arguments and parameters
and the purpose of the return statement in functions.
Arguments are the real values passed to the parameters. Parameters are temporary
values/variables used only for the function.
2. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with C, explain in a few
sentences the difference between the * and the & operators
(* related to pointers, not the multiplication operator).
‘*’ is used for pointer purposes. ‘&’ is used to assign a value to a variable based on user’s
input.
*/