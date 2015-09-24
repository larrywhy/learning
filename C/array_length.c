#include<stdio.h>

int main()
{
    int array[] = {3,0,5,7,2,4,6,8,9,1};
    int len = (int) sizeof(array) / sizeof(*array);    // calculate the array length
    
    
    printf("number is %d\n",len);    // print length    
    printf("address is %x\n",&len);  // show length address
    
    system("pause");
    return 0;
}
