#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Iveskite sveika skaiciu: \n");
    scanf("%d", &x);
    char a[10] = "lyginis";
    char b[10] = "nelyginis";
    printf("Ivestas skaicius yra %s.", ((x % 2) == 0)? a : b );
    return 0;
}

