#include <stdio.h>
#include <stdlib.h>
void binary(long num);

int main()
{
    printf("a) %lX; %lX; %lX.\n", 0b110000011L, 0b100000011011111101110101L, 0b1111010000010010101110001001101001L);
    printf("b) ");
    binary(0xAD02);
    printf("; ");
    binary(0x9F04E10C);
    printf("; ");
    binary(0x548632897);
    printf(".\n");
    printf("c) %d; %d; %d.\n", 0b11011, 0b10010100, 0b11001011010101);
    printf("d) ");
    binary(37);
    printf("; ");
    binary(241);
    printf("; ");
    binary(2487);
    printf(".\n");
    printf("e) %d; %d; %d.\n", 0x6E2, 0xED33, 0x123456);
    printf("f) %X; %X; %X.\n", 243, 2483, 4612);

    return 0;
}
void binary(long num)
{
    int bin[64], i, j;

    for (i = 0; num > 0; i++)
    {

        bin[i] = num % 2;
        num /= 2;
    }

    for (j = i - 1; j >= 0; j--)
    {

        printf("%d", bin[j]);
    }
}
