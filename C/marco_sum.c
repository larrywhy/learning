/* mirco_sum.c */
#include <stdio.h>
#include <stdlib.h>


#define SUM(a,b) (a + b)
#define SUM2(a,b) a + b

int main(){
    

    printf("SUM = %d\n",SUM(2,5) * 10); // 70
    printf("SUM2 = %d\n",SUM2(2,5) * 10); // 52
    return 0;
}
