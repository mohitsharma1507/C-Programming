#include<stdio.h>
int ten_times(int *a);

int main(){
    int a=7;
    int c;
   c= ten_times(&a);
   printf("%d\n",c);
    return 0 ;
}
int ten_times(int *a){
    int temp;
    temp=10*(*a);
    return temp;

}