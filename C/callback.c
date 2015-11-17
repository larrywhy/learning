/* callback.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int callback1(void);
int callback2(void);
void printNumber();

int main(){
    srand(time(NULL));

    printNumber(&callback1);
    printNumber(&callback2);
    printNumber(&rand);
    return 0;
}

void printNumber(int (*callback)(void)){
    printf("%d\n",callback());
}

int callback1(void){
    return 0;
}

int callback2(void){
    return (rand() % 100) + 1000;
}
