#include<stdio.h>

int main(){
    char s[16];
    printf("enter ur name:\n");
    gets(s);
    puts(s);
    printf("your name is %s",s);
    return 0 ;
}