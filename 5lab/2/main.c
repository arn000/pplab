#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int C = 1000;

int main()
{
    int A[C];
    time_t t;
    int a, b, c;
    while(1)
    {
        printf("enter 3 numbers \n");
        scanf ("%d %d %d",&a, &b, &c);
        if (c <= 1000 && c > 0)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("too big. capacity: (0;1000]\n");
        }
    }
    srand((unsigned) time(&t));
    for(int i = 0; i < c; i++)
    {
        A[i] = rand() % b + a;
        printf("%d \n", A[i]);
    }
}
