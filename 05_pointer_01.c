//CALL BY REFERENCE
#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int x=8,y=5;
    printf("the value of x and y before function call is %d and %d\n",x,y);
    swap(&x, &y);
    printf("the value of x and y after function call is %d and %d\n",x,y);

    return 0 ;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}