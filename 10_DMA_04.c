
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr= (int*)malloc(10 * sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i]=7*(i+1);
        printf("the value of  7 X %d =%d \n",i+1,ptr[i]);
    }
    ptr= realloc(ptr,20*sizeof(int));
    printf("\n\n after the reallocation \n\n");
    for(int i=0;i<20;i++){
        ptr[i]=7*(i+1);
        printf("the value of  7 X %d =%d \n",i+1,ptr[i]);
    }
    return 0 ;
}