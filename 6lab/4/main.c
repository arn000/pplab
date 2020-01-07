#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int main ()
{
    int year, month, day, ex, flag = 0,day_num;
    double y,c,d,m;
    char day_name [40];
    printf("enter date: year-month-day : ");
    while (1)
    {
        ex = scanf("%d-%d-%d", &year, &month, &day);
        while(getchar() != '\n')
            flag = 1;
        if(flag == 0 && ex ==3 && month>0 && month <13 && day>0 && day<32 && year > 0)
        {
            break;
        }
        else
        {
            printf("error");
            flag= 0;
        }
    }
    y = year - (year/100)*100;
    c = (year/100);
    d = day;
    if(month >= 3)
        m = month - 2;
    if(month == 1)
        m = 11;
    if(month == 2)
        m = 12;
    day_num = fmod(d + floor(2.6*m-0.2) + floor(y/4) + floor(c/4),7);
    if(day_num < 0)
        day_num = day_num + 7;
    FILE *fp;
    fp = fopen ("week.txt","r");
    fscanf(fp,"%s", &day_name);
    while (day_num != 0)
    {
        day_num -= 1;
        fscanf(fp,"%s", &day_name);
    }
    fclose(fp);
    printf("%s", day_name);
    return 0;

}
