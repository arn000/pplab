#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x, x1, x2;
    printf("enter 1st whole number: \n");
    scanf("%f", &a);
    while(1)
    {
        if (fmod(a, 2) == 1 || fmod(a, 2) == -1 || fmod(a, 2) == 0 || a == 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole \n");
            scanf("%f", &a);
        }
    }
    printf("enter 2nd whole number: \n");
    scanf("%f", &b);
    while(1)
    {
        if (fmod(b, 2) == 1 || fmod(b, 2) == -1 || fmod(b, 2) == 0 || b == 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole\n");
            scanf("%f", &b);
        }
    }
    printf("enter 3rd whole number: \n");
    scanf("%f", &c);
    while(1)
    {
        if (fmod(c, 2) == 1 || fmod(c, 2) == -1 || fmod(c, 2) == 0 || c == 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole\n");
            scanf("%f", &c);
        }
    }
    int y = (pow(b, 2) - (4 * a * c));
    if (y > 0)
    {
        x1 = (b - (sqrt(y))) / (2 * a);
        x2 = (b + (sqrt(y))) / (2 * a);
        printf("2 solutions: %0.2f %0.2f \n", x1, x2);
    }
    else if (y == 0)
    {
        x = (-b) / (2 * a);
        printf("1 solution: %0.2f\n", x);
    }
    else
        printf("no solutions\n");

    return 0;
}
