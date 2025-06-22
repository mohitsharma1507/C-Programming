#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("enter the number n: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("this is a not prime number");
    }
    else
    {
        printf("this is a prime number");
    }
    return 0;
}