#include<stdio.h>
void printArrays(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n",i+1,*(ptr+i));
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    printArrays(arr,8);
    return 0 ;
}