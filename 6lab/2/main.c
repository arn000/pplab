#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define max 1000

int countnum (int a)
{
    int amount = 0;
    while (a != 0)
    {
        amount++;
        a= a / 10;
    }
    return amount;
}

int close();
int main()
{
    int num, dec, y;
    int check = 0;
    int length = 0;
    char n[max] = "in.txt";
    FILE *rf;

    while(1)
    {
        rf = fopen(n,"r");
        y = fscanf(rf,"%d,%d", &num, &dec);
        while (fgetc(rf) != EOF)
        {
            check = 1;
        }
        if (check == 0 && y == 2 && num >= 10 && num <= 1000 && countnum(dec) <= 3)
        {
            printf("file filled correctly\n");
            break;
        }
        else if (check == 0 && y == 1 && num >= 10 && num <= 1000)
        {
            printf("file filled correctly\n");
            break;
        }
        else
        {
            printf("create file in.txt\n");
            scanf("%s", n);
        }
    }

    if (y == 1)
    {
        length = countnum(num);
    }
    else
        length = countnum(num) + countnum(dec);

    close(rf);
    printf("length =  %d", length);
    return 0;
}

