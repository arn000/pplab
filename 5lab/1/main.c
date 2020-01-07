#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX = 10;
    int x[MAX];

    for (int i = 0; i < MAX; i++)
    {
        x[i] = 0;
        printf ("%d ", x[i]);
    }
    printf("\n");
    x[0] = 1;
    x[3] = 2;
    x[9] = 3;

    for (int i = 2; i < MAX - 1; i++)
    {
        x[i] = x[i+1];
    }

    for (int i = MAX - 1; i >= 6; i--)
    {
        x[i+1] = x[i];
    }
    x[6] = 4;
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    int a, b;
    while(1)
    {
        printf("enter 2 numbers \n");
        scanf("%d %d", &a, &b);
        if (a <= 10 && a > 0)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("too big. capacity: (0;10] \n");
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        if (i == (a-1))
        {
            x[i] = b;
        }
    }
    int q;
    while(1)
    {
        printf("enter 1 number \n");
        scanf("%d", &q);
        if (0 < q <= 10)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("too big. capacity: (0;10] \n");
        }
    }
    for (int i = q - 1; i < MAX - 1; i++)
    {
        x[i] = x[i+1];
    }
    int p, l;
    while(1)
    {
        printf("enter 2 numbers \n");
        scanf("%d %d", &p, &l);
        if (0 < p <= 10)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("too big. capacity: (0;10] \n");
        }
    }


    for (int i = MAX - 1; i >= (p - 1); i--)
    {
        x[i+1] = x[i];
    }
    x[p-1] = l;
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", x[i]);
    }
    return 0;
}

