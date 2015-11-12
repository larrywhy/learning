#include<stdio.h>
#include<stdlib.h>

void swap(int *, int *);


int main()
{

    int x = 3;
    int y = 2;
    
    printf("before swap: x = %d, y = %d\n",x,y);
    swap(&x,&y);
    printf("after swap: x = %d, y = %d\n",x,y);
    
    system("pause");
    return 0;
}

void swap(int * num1, int * num2)
{
    int tmp;
    
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
