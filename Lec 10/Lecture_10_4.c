#include<stdio.h>

int a;

int main()
{
    extern int a;
    printf("Value of a is %d\n", a);
    return 0;
}