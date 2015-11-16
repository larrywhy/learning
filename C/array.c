#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3] = {0,2,3};
    int i = 0; /* loop variable */

    /* show array content */
    for(i = 0; i < 3; i++){
        printf("%d\n",i);
    }

    /* use pointer to show array contetn */
    printf("array[0] = %d\n",array[0]);
    printf("*array = %d\n",*array);

    /* the second value of array */
    printf("array[1] = %d\n",array[1]);
    printf("*(array + 1) = %d\n",*(array + 1));


    return 0;
}
