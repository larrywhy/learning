/* function_ptr.c */
#include <stdio.h>
#include <stdlib.h>

int callbackAdd(int, int);
int callbackMul(int, int);

int main(){
    int (*p)(int a, int b);
    p = callbackAdd;
    printf("%d\n",p(3,5));
    p = callbackMul;
    printf("%d\n",p(3,5));
    return 0;
}

int callbackAdd(int a, int b){
    return a + b;
}

int callbackMul(int a, int b){
    return a * b;
}
