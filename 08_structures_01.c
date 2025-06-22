#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee pojo ={124,89023,"Pojo"};

    printf("Code is : %d \n",pojo.code);
    printf("Salary is : %f \n",pojo.salary);
    printf("Name is : %s \n",pojo.name);
    return 0 ;
}