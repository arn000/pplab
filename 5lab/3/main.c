#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int s, n;
    while(1)
    {
        printf("enter 2 numbers\n");
        scanf("%d %d", &s, &n);
        if (n>0&&s>0)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("ONLY POSITIVE NUM\n");
        }
    }
    int x[n];
    while(1)
    {
        int k = 0;
        for (int i=0; i<n; i++)
        {
            printf("enter a positive num\n");
            scanf("%d", &x[i]);
            if (x[i] > 0)
            {
                k++;
                printf("success\n");
            }
            else
            {
                printf("ONLY POSITIVE NUM\n");
            }
        }
        if (k == n)
        {
            break;
        }
    }
    for (int i=0; i<n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((x[i]*x[j])==s)
            {
                printf("(%d, %d);\n", x[i], x[j]);
            }
        }
    }
}
