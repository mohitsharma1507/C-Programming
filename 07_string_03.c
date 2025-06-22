#include<stdio.h>
#include<string.h>

int main(){
    // char *st="bobby";
    char st[34]="bobby";
    char *str2="bhai";
    // strcpy(str2,st);
    // int a=strlen(st);
    // strcat(st,str2);
    int val=strcmp(st,str2);
    // printf("now the st is %s",st);
    // printf("now the st2 is %s",st);
    printf("now the val is %d",val);
    return 0 ;
}