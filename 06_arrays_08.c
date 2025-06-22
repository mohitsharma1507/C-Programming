#include<stdio.h>

int main(){
    int multiply[10],n;
    printf("enter the number which u want to multiple:\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        multiply[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%dX%d=%d\n",n,i+1,multiply[i]);
    }
    return 0 ;
}