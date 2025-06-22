#include<stdio.h>

typedef struct time {
    int hour;
    int minute;
    int second;
}time;
void timer(time t){
    printf("the time is: %d:%d:%d\n",t.hour,t.minute,t.second);
}
int timeCmp(time t1,time t2){
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
}
int main(){
    time t1={2,11,22};
    time t2={5,12,23};
    timer(t1);
    timer(t2);
    int a=timeCmp(t1,t2);
    printf("time comparison function returns:%d",a);
    
    return 0 ;
}