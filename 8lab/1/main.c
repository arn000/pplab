#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//arrays theme

int *createArray(int low, int high, int size);
int *generateArray(int low, int high, int size);

int main()
{
    int *array = createArray(-500, 5000, 10);
    int *newarray = generateArray(-500, 5000, 10);

}

int *createArray(int low, int high, int size)
{
    int *info = (int *) malloc(sizeof(int)*size);
    int f_num;
    if(low < high)
    {
        for (int i = 0; i < size; i++)
        {
            info[i] = rand() % high + low;
        }
        return &info[0];
    }
    else
    {
        return NULL;
    }
}

int *generateArray(int low, int high, int size)
{
    int *info = (int *) malloc(sizeof(int)*size);
    int f_num;
    if(low < high)
    {
        for (int i = 0; i < size; i++)
        {
            *(info + i) = rand() % high + low;
        }
        return &info[0];
    }
    else
    {
        return NULL;
    }
}
