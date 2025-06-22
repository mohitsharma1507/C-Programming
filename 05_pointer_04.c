#include<stdio.h>

void sumAndAvg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg= (float)(*sum)/2;
}
int main(){
    int i,j,sum;
    float avg;
    i=9;
    j=8;
    sumAndAvg(i,j,&sum,&avg);
    printf("the value of sum is %d\n",sum);
    printf("the value of avg is %f\n",avg);
    return 0 ;
}