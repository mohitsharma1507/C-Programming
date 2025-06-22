#include<stdio.h>

int main(){
    FILE *temp;
    int number =90;
    temp=fopen("generated.txt","w");
    fprintf(temp,"the number is %d",number);
    fclose(temp);
    return 0 ;
}