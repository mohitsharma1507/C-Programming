#include<stdio.h>
#include<string.h>

void copystr(char *st,char *st2){
    int i=0;
    while(st[i]!='\0');{
        st2[i]=st[i];
        i++;
    }
    st2[i]='\0';
}
int main(){
    char st[50]="mickal";
    char st2[50];
    strcpy(st2,st);
    printf("%s",st2);
    return 0 ;
}