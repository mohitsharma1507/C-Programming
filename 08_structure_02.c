#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
    printf("Code is : %d \n",emp.code);
    printf("Salary is : %f \n",emp.salary);
    printf("Name is : %s \n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    ptr->code=1290;
    ptr->salary=12.90;
    strcpy(ptr->name,"bola");

    show(e1);

    return 0 ;
}