#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char symbol=251;
    double x, y, z;
    double a, b;
    printf("Iveskite 3 sveikuosius skaicius: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    a = x + 4 * y + pow(z, 3);
    if (z < 0)
        z = z * (-1);
    b = (x + sqrt(y))*(pow(z, 4) - z + 46.3);
    printf("a) x + 4y + z3 = %f\n", a);
    printf("b) (x + square root of y (z4-|z|+46.3)  = %f\n", b);
    return 0;
}
