#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int max = 100;

int main()
{
    float x[max];
    int n;
    float sum = 0;
    float avg = 0;
    printf("enter number quantity n: \n");
    scanf ("%d", &n);
    x[max] = 0;
    printf("enter n amount: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        sum += x[i];
        avg = sum / n;
    }
    float max = x[0];
    float min = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        if (x[i] < min)
        {
            min = x[i];
        }
    }
    printf("sum = %0.2f, avg = %0.2f\n", sum, avg);
    printf("max = %0.2f, min = %0.2f\n", max, min);
}
