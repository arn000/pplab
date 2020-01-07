#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const int max = 1000;
    int mas[max];
    int k = 0;
    printf("enter 1 number\n");
    for (int i = 0; i < max; i++)
    {
        scanf("%d", &mas[i]);
        if (mas[i] > 0)
        {
            k++;
            printf("success\n");
        }

        else
        {
            printf("end of array\n");
            i = i;
            break;
        }
    }
    int kiek = 0;
    int mas2[max];
    for (int i = 0; i < k; i++)
    {
        int j = 2;
        int p = 1;
        while (j < mas[i])
        {
            if (mas[i] % j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1)
        {
            mas2[i] = 0;
            kiek++;
            mas2[kiek] = mas[i];
        }

    }
    for (int i = 0; i < kiek - 1; i++)
    {
        for (int j = i + 1; j < kiek; j++)
        {
            if (mas2[i] == mas2[j])
            {
                mas2[j] = 0;
            }
        }
    }
    for (int i = 0; i < kiek; i++)
    {
        if (mas2[i] != 0 && mas2[i] > 1)
        {
            printf("%d\n", mas2[i]);
        }
    }
}
