#include <stdio.h>
#include <stdlib.h>

int getFileSize (char fileName[])
{
    int size;
    FILE *fp;
    fp = fopen(fileName, "r");
    if (fp == NULL)
        return -1;
    fseek(fp, 0L, SEEK_END);
    size = ftell(fp);
    fclose(fp);
    return size;
}
char *File (int argc, char *argv[])
{
    int max = getFileSize(argv[1]);
    char *name = argv[1];
    for(int i = 1; i <= argc; i++)
    {
        if(max < getFileSize(argv[i]))
        {
            max = getFileSize(argv[i]);
            name = argv[i];
        }
    }
    return name;
}
int main (int argc, char *argv[])
{
    printf("%s", File(argc, argv));
}
