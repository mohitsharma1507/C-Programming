#include <stdio.h>
void starpattern();
int main()
{
    int n = 5;
    starpattern(n);
    return 0;
}

void starpattern(int n)
{
int i, j;
for (i = 1; i <= n; i++)
{
    for (j = 1; j <=i; j++)
    {
    printf("*");
    }
    {
    printf("\n");
    }
    
}
}