// basic c program to understand pointers

#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("Address of a is %p\n", &a);
    printf("Value of p is %p\n", p);
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *p);
    printf("Address of p is %p\n", &p);
    return 0;
}