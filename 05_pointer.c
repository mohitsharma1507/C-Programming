//CALL BY VALUE
#include<stdio.h>
int sum(int a,int b);

int main(){
    int a=3,b=7;
    printf("the value of a and b before function call is %d and %d\n",a,b);
    printf("the value of a and b is  %d\n",sum(a,b)); //call function
    printf("the value of a and b after function call is %d and %d\n",a,b);
    return 0 ;
}
int sum(int a,int b){
    return a+b;
}