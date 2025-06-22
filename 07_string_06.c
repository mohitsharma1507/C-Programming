#include<stdio.h>

int main(){
    char *st,ch;
    printf("enter the string:\n");
    scanf("%s",st);
    fflush(stdin);
    printf("enter the character:\n");
    scanf("%c",&ch);
    while(*st!='\0'){
        if(*st==ch){
            printf("%c is present in this string",ch);
            break;
        }
        st++;
    }
    printf("%c is not present in this string",ch);
    return 0 ;
}