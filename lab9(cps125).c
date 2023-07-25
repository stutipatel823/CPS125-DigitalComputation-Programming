// Exercise #1
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct shape
{
    float line, radius, areacircle, areacylinder, volumecylinder;
};
int main(void)
{
    struct shape s;
    s.areacircle = 3.141 * s.radius * s.radius;
    s.areacylinder = (s.areacircle * 2) + (s.line * 2 * 3.14 * s.radius);
    s.volumecylinder = (s.areacircle * s.line);
    printf("Please enter the radius of the cylinder:\n");
    scanf("%f", &s.radius);
    printf("Please enter the length of the cylinder:\n");
    scanf("%f", &s.line);
    printf("The area of the cross section is %f\n", s.areacircle);
    printf("The area of the cylinder is %f\n", s.areacylinder);
    printf("The volume of the cylinder is %f\n", s.volumecylinder);
    return (0);
}
// Exercise #2
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
struct strength
{
    float p, d, stress, strain;
};
int main(void)
{
    struct strength s;
    double area = 3.14 * s.d * s.d / 4;
    s.stress = s.p / area;
    s.strain = s.stress / (30000000);
    printf("Please enter the Compression load:\n");
    scanf("%f", &s.p);
    printf("Please enter the diameter:\n");
    scanf("%f", &s.d);
    printf("The load is %f\n", s.p);
    printf("The diameter is %f\n", s.d);
    printf("The stress is %f\n", s.stress);
    printf("The strain is %f\n", s.strain);
}
// Exercise#3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct car
{
    char make[20];
    char model[20];
    char colour[20];
    int year;
};
struct car *ptr;
void display(struct car *p);
int main(void)
{
    ptr = (struct car *)malloc(sizeof(struct car *) * 3);
    for (int i = 0; i < 3; i++)
    {
        printf("Enter make, model, colour and year\n");
        scanf("%s%s%s%d", (ptr + i)->make, (ptr + i)->model,
              (ptr + i)->colour, &(ptr + i)->year);
    }
    display(ptr);
    return (0);
}
void display(struct car *
                 p)
{
    printf("Make\tModel\tColour\tYear\n");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp((ptr + i)->colour, "yellow") == 0 && (ptr + i)->year > 2010)
            printf("%s\t%s\t%s\t%d\n", (ptr + i)->make, (ptr + i)->model,
                   (ptr + i)->colour, (ptr + i)->year);
    }
}
/*
Exercise 4
The “%u” will not be recognized therefore, there will be no output. If “%u”
was replaced with “%d,%s,%s” then the output would be “1 If all that you
have is hammer Everything looks like a nail"
*/