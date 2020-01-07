#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
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
            printf ("not whole\n");
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
    printf ("positive whole numbers, which divides from C without residuals\n");
    for (float i = a; i <= b; i++)
    {
        if (fmod(i, c) == 1 && i > 1)
        {
            printf ("%0.0f \n", i);
        }
    }
    return 0;
}
