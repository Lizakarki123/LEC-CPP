#include<stdio.h>
int main(){
    int *pc,c;
    c=22;
    printf("Address of c: %p",&c);
    printf("value of c: %d",c);

    pc=&c;
    printf("Address of pointer pc: %p",pc);
    printf("Content of pointer pc: %d",*pc);

    c=11;
    printf("Address of pointer pc: %p",pc);
    printf("Address of pointer pc: %d",*pc);
     
    *pc=22;
    printf("Address of c:%p",&c);
    printf("value of c:%d",c);
    return 0;
}
