#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("sample.txt", "r");
    if (ptr == NULL)
    {
        printf("this file does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num);
        fclose(ptr);
    }
    return 0;
}