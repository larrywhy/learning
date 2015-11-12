#include<stdio.h>
#include<stdlib.h>
#define DEBUG
#define DEBUGC
int main()
{

#ifdef DEBUG
    int c = 3;
    int *p; /* p is a pointer to an address */
    
    /* print value of c */
    printf("%d\n",c);
    /* print address of c*/
    printf("address of c is %x\n",&c);
    /* assign address of c to p */
    p = &c;
    /* print content of p (address) */
    printf("p is %x\n",p);
    /* print value of p */
    printf("*p is %d\n",*p);
    
    printf("the next address of p is %x\n",++p);
#endif
    printf("\n\n");
#ifdef DEBUGC
    char ch = 'A';
    printf("%d\n",ch);
    printf("address of ch is %x\n",&ch);
    
    char *cptr;
    cptr = &ch;
    
    printf("value of *ptr is %c\n",*cptr);
    printf("*ptr is %d(by value, not character)\n",*cptr);
    printf("cptr is %x\n",cptr);
    
#endif
    printf("\n\n");

    printf("size of c = %d\n",sizeof(c));  
    printf("size of p = %d\n",sizeof(p));  
    printf("size of ch = %d\n",sizeof(ch));
    printf("size of *cptr = %d\n",sizeof(*cptr)); 
    printf("size of cptr = %d\n",sizeof(cptr)); 
    
    double num = 30;
    char *n_ptr;
    printf("size of num = %d\n",sizeof(num));
    printf("size of &num = %d\n",sizeof(&num));
    n_ptr = (char *)&num;
    printf("size of num_ptr = %d\n",sizeof(n_ptr));
    
    double *numptr;
    numptr = &num;
    printf("size of numptr = %d\n",sizeof(numptr));
    
    /* numptr is a pointer, point to an address */
    /* cast cptr to double * type, then assign to numptr */
    numptr = (double *)cptr;
    
    /* print the content of numptr */
    printf("%x\n",numptr);
    system("pause");
    
    return 0;
}
