#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("enter the number n:\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("the value of sum (n) is %d", sum);
    return 0;
}