// Exercise 1
#include <stdio.h>
int checkdiag(int matrix[3][3], int size);
int main(void)
{
    int size = 3;
    int matrix[size][size];
    int q;
    FILE *in;
    in = fopen("matrix1.txt", "r");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            fscanf(in, "%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    q = checkdiag(matrix, 3);
    if (q == 3)
    {
        printf("All diagonals are equal\n");
    }
    else
    {
        printf("All diagonals are not zero\n");
    }
    return 0;
}
int checkdiag(int matrix[3][3], int size)
{
    int p, q, r;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p = matrix[0][0];
            q = matrix[1][1];
            r = matrix[2][2];
        }
    }
    if (p == 0 && q == 0 && r == 0)
        return (3);
    else
        return (-1);
}
// Exercise 2
#include <stdio.h>
#include <stdlib.h>
int count_zeros(int arr[], int size);
int count_neg(int arr[], int size);
int main(void)
{
    FILE *
        in;
    in = fopen("arr.txt", "r");
    int how_many, c;
    int *ptr_1 = NULL, *arr;
    fscanf(in, "%d", &how_many);
    *ptr_1 = 7;
    printf("Value of ptr_1 is %d\n", *ptr_1);
    arr = (int *)malloc(sizeof(int) * 5);
    printf("Enter five elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }
    printf("Elements are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(arr + 1));
    }
    free(arr);
    arr = (int *)malloc(sizeof(int) * how_many);
    for (int i = 0; i < 4; i++)
    {
        fscanf(in, "%d", (arr + i));
    }
    c = count_zeros(arr, 5);
    printf("Num of zeros: %d\n", c);
    c = count_neg(arr, 5);
    printf("Num of negatives: %d\n", c);
    return 0;
}
int count_zeros(int arr[], int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            c++;
    }
    return (c);
}
int count_neg(int arr[], int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            c++;
    }
    return (c);
}
/*
1. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with Geany, explain why you
need to send the sixe to a function that accepts a numerical
array.
In C programming, passing the size of an array to a function is necessary
because the function needs to know the length of the array/2d array in
order to complete the task.
2. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with Geany, explain you need
a '\0' at the end of a string.
When you finish a string array, you must add /0 because the library is the only
one that knows where the string ends.
*/