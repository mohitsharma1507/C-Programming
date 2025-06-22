#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a=98;
    char b='g';
    float c=56.53;

    struct employee e1;
    e1.code=100;
    e1.salary=56.235;

    strcpy(e1.name,"jojo");

    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    
    return 0 ;
}