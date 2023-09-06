// c program to understand pointers and arrays

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = a;
    printf("Address of a is %p\n", a);
    printf("Value of p is %p\n", p);
    printf("Value of a is %d\n", a[0]);
    printf("Value of a is %d\n", *p);
    printf("Address of p is %p\n", &p);
    return 0;
}