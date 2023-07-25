// Exercise 1
#include <stdio.h>
int main(void)
{
    int i = 0;
    int element = 0;
    int max = 100;
    int min = 0;
    double x_arr[25];
    double x_high = 0;
    double x_low = 10000;
    double
        x_second_arr[25];
    double norm_x_arr[25];
    FILE *in;
    in = fopen("data1.txt", "r");
    // Inputting data into x_arr
    while (!feof(in))
    {
        fscanf(in, "%lf ", &x_arr[i]);
        i += 1;
        element += 1; // Counting
        printf("Element: %d\n", element);
    }
    // Printing First Array (x_arr)
    printf("x_arr: ");
    for (int j = 0; j < 25; ++j)
    {
        printf("%2.2lf ", x_arr[j]);
        if (x_arr[j] > x_high)
            x_high = x_arr[j];
        else if (x_arr[j] < x_low)
            x_low = x_arr[j];
    }
    printf("\n");
    printf("x_high: %2.2lf\n", x_high);
    printf("x_low: %2.2lf\n", x_low);
    // Creating Second Array (x_second_arr)
    printf("x_second_arr: ");
    for (int k = 0; k < 25; ++k)
    {
        x_second_arr[k] = 3 * x_arr[k];
        printf("%2.2lf ", x_second_arr[k]);
    }
    // Creating Normalized Array (norm_x_arr)
    printf("\n");
    printf("norm_x_arr: ");
    for (int xi = 0; xi < 25; ++xi)
    {
        norm_x_arr[xi] = (min + ((x_arr[xi] - x_low) * (max -
                                                        min))) /
                         (x_high - x_low);
        printf("%2.2lf ", norm_x_arr[xi]);
    }
}
/*
1. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with Geany, explain in a few
sentences why arrays and loops are made to work together
and why must we start the array index at 0 instead of 1.
Since for loops have a counting variable, they can be used to quickly access all elements
in an array
2. Using your text book, or an Internet search (you can ask your
TA) or simply by experimenting with Geany, explain in a few
sentences how arrays are stored in memory compared to
regular scalar variables.
A set M of memories used to store scalar and array variables. An array stores its elements
in contiguous(sequently) memory locations. Scalar variables get stored everytime it
changes; sometimes the variables may not be updated/changed.
*/