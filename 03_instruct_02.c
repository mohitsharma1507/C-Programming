#include <stdio.h>

int main()
{
    int a, b, c, d, f1, f2;
    printf("enter the value a :");
    scanf("%d", &a);
    printf("enter the value b :");
    scanf("%d", &b);
    printf("enter the value c :");
    scanf("%d", &c);
    printf("enter the value d :");
    scanf("%d", &d);
    if (a > b)
    {
        f1 = a;
    }
    else
    {
        f1 = b;
    }
    if (c > d)
    {
        f2 = c;
    }
    else
    {
        f2 = d;
    }
    if (f1 > f2)
    {
        printf("%d is number", f1);
    }
    else
    
    {
        printf("%d is number", f2);
    }

    return 0;
}