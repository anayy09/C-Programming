// c program to perform operations on pointers

#include <stdio.h>

int main()
{
    int const *p = 10;
    printf("%d\n", ++(*p));
    return 0;
}