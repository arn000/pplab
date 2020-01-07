#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    int x0, x1, d, xc, fc;
    printf("enter 1st positive whole number: \n");
    scanf("%f", &a);
    while(1)
    {
        if (fmod(a, 2) == 1 || fmod(a, 2) == -1 || fmod(a, 2) == 0 || a >= 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole or not positive\n");
            scanf("%f", &a);
        }
    }
    printf("enter 2nd positive whole number: \n");
    scanf("%f", &b);
    while(1)
    {
        if (fmod(b, 2) == 1 || fmod(b, 2) == -1 || fmod(b, 2) == 0 || b >= 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole or not positive\n");
            scanf("%f", &b);
        }
    }
    printf("enter 3rd whole number: \n");
    scanf("%f", &c);
    while(1)
    {
        if (fmod(c, 2) == 1 || fmod(c, 2) == -1 || fmod(c, 2) == 0 || c >= 0)
        {
            printf("correct\n");
            break;
        }
        else
        {
            printf ("not whole or not positive\n");
            scanf("%f", &c);
        }
    }
    x0 = a;
    x1 = b;
    d = x1 - x0;
    xc = x1 + ((c - 1) * d);
    fc = (xc - d) + (xc - (2 * d));
    printf("num fc = %d\n", fc);

    return 0;
}
