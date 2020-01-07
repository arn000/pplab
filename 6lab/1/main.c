#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//factiorials n shit

int main()
{
    FILE *rf;
    int a, b;
    long long int big1 = 1;
    int check = 0;
    int isdigit();
    int close();

    printf("me do factorial\n");
    while(1)
    {
        printf("enter a positive number \n");
        b = scanf("%d", &a);
        while (getchar() != '\n')
        {
            check = 1;
        }
        if (check == 0 && b == 1 && a > 0)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("only positive num\n");
            check = 0;
        }
    }
    for (int i = 1; i <= a; i++)
    {
        big1*= i;
    }

    rf = fopen("out.txt", "w");
    fprintf(rf, "factiorial of %d is = %llu \n", a, big1);
    close(rf);
    printf("factiorial of %d is = %llu \n", a, big1);

    return 0;
}
