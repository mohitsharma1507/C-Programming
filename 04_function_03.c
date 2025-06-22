#include <stdio.h>
int fact(int x);
int main()
{
    int a;
    printf("enter the value of a:\n");
    scanf("%d", &a);
    printf("the value of factorial %d is %d", a, fact(a));
    return 0;
}
int fact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}