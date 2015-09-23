#include<stdio.h>

int main(){
    
    int n = 55;    // verify n is prime number or not.
    int i = 0;
    int flag = 0;  // n is prime number, if flag > 0 
    int count = 0;
    
//
// use this way can reduce the executing times.
//
#if 1
    for(i = 2; i * i < n  ; i++){
        if(n % i == 0)
            flag++;
        count++;    
    }
#endif
//
// check each element is prime number or not.
// 
#if 0
    for(i = 2; i < n; i++){
        if(n % i == 0)
            flag++;
        count++;    
    }   
#endif
    printf("comparison times for loop actions: %d\n",count);
    
    if(flag != 0) 
        printf("%d is not prime number!",n);
    else    
        printf("%d is prime number!",n);
    
    return 0;
}
