#include <stdio.h>
#include<math.h>
int areaofsquare();

int main()
{
    int side;
    printf("enter the side value : \n");
    scanf("%d",&side);
    printf("the value of square is %f\n",pow(side,2));
    return 0;
}
