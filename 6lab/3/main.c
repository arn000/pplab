#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define n 4

int close();
int main ()
{
    int x1, x2, x3, x, y;
    int check = 0;
    int num[n];
    char txt[MAX];
    FILE *rf;
    printf("enter 3 numbers. ex.: x;y;z\n");
    while(1)
    {
        y = scanf("%d;%d;%d", &x1, &x2, &x3);
        while (getchar() != '\n')
        {
            check = 1;
        }
        if(check == 0 && y == 3)
        {
            break;
        }
        else
        {
            check = 0;
            printf("error, bad format\n");
        }
    }

    num[0] = x1;
    num[1] = x2;
    num[2] = x3;

    for(int i = 0; i < 2; i++)
    {
        if(num[i] > num[i+1])
        {
            x = num[i+1];
            num[i+1] = num[i];
            num[i] = x;
            i--;
        }
    }
    printf("enter a file to display y\n");
    printf("File: ");
    while(1)
    {
        check = scanf("%s", &txt);
        for (int i = '\0'; i >= 0 ; i--)
        {
            if(txt[i] == 't' && txt[i-1] == 'x' && txt[i-2] == 't' && txt[i-3] == '.')
            {
                check = 1;
            }
        }
        if(check == 1)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("\n try again \n");
        }
    }
    rf = fopen(txt, "w");
    fprintf(rf,"%d", num[1]);
    fclose(rf);

    return 0;
}
