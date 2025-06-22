#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(struct employee emp){
    printf("Code is : %d \n",emp.code);
    printf("Salary is : %f \n",emp.salary);
    printf("Name is : %s \n",emp.name);
}
int main(){
    emp e1;
    emp *ptr;

    ptr=&e1;
    ptr->code=1290;
    ptr->salary=12.90;
    strcpy(ptr->name,"kola");

    show(e1);

return 0;
}