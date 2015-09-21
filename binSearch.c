#include<stdio.h>
#include<stdlib.h>
#define MAX 6

int main()
{
    int ary1[MAX] = {6,9,12,55,77,88};
    printf("%d",binSearch(ary1,55,1,6));
    
    system("pause");
    return 0;
}
//
// binary Search 
// left must begin with 1, and right must begin with Length 
//
int binSearch(int ary[], int search_num, int left, int right)
{
    int mid = (left + right) / 2;

    if(left > right)
        return -1;
    else{
        if(search_num < ary[mid])
            binSearch(ary, search_num, left, mid - 1);
        else if(search_num > ary[mid])
            binSearch(ary, search_num, mid + 1, right);
        else
            return mid;
    }
}
