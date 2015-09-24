#include<stdio.h>

int main()
{
//
// character array (string)
//
#if 0
    char name[] = "hello";
    int string_size = sizeof(name);
    int string_addr_size = sizeof(*name);
    
    // show the size of string (include '\0')    
    printf("The size of string is %d\n",string_size);    
    // show the size of string array address
    printf("The size of character array (pointer) is %d\n",string_addr_size);
    // check the last bit    
    if(name[string_size-1] == '\0')
        printf("The last bit is \'\\'0\'\n");
    // print the number of total characters.
    printf("The number of tatal characters are %d.\n",string_size - 1);
#endif
//
// integer array
//
#if 1
    int array[] = {3,0,5,7,2,4,6,8,9,1};
    int array_size = sizeof(array);
    int arrdress_size = sizeof(*array);  
    
    // show the size of array 
    printf("The size of array is %d\n",array_size);
    // show the size of array (pointer)
    printf("The size of array address (pointer) is %d\n",arrdress_size);  // show length address  
    // Calculate the length of array
    int array_len = (int) array_size / arrdress_size; 
    printf("The length of array is %d\n",array_len);
#endif
//
// double array
//
#if 0
    double double_array[] = {1,3.23,0.5,5,7.9,2.3,4,6.3,8.6,9.2,1.0};
    int double_array_size = sizeof(double_array);
    int double_arrdress_size = sizeof(*double_array);  
    
    // show the size of double array 
    printf("The size of array is %d\n",double_array_size);
    // show the size of double array (pointer)
    printf("The size of array address (pointer) is %d\n",double_arrdress_size);  // show length address  
    // Calculate the length of double array
    int double_array_len = (int) double_array_size / double_arrdress_size; 
    printf("The length of array is %d\n",double_array_len);
#endif
    system("pause");
    return 0;
}
