#include <stdio.h>
#include <stdlib.h>

struct str{
    int a;
    char c;
};

int main(){

    printf("%lu",sizeof(struct str));
    // some compiler -> 8 (4+4) or 5 (1+4)
    // most are 8 for alignment.
    return 0;
}
