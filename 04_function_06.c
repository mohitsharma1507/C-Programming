#include <stdio.h>
int fibo(int);
int main()
{
    int num, i;
    printf("enter the value of num\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("%d\n", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}