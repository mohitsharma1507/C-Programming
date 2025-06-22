#include<stdio.h>

int main(){
    int students=3;
    int subject=4;

    int marks[3][5] ,i,j;

    for(int i=0;i<students;i++){
        for(int j=0;j<subject;j++){
            printf("enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<students;i++){
        for(int j=0;j<subject;j++){
            printf("enter the marks of student %d in subject %d is :%d\n",i+1,j+1,marks[i][j]);
            
        }
    }
    printf("martix is:\n");
    for(int i=0;i<students;i++){
        for(int j=0;j<subject;j++){
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
        
    }
    
    return 0 ;
}


