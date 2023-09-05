// write a C program for multiplication using a inline function

#include<stdio.h>

static inline int mul(int a, int b)
{
    return a*b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication of %d and %d is %d", a, b, mul(a, b));
    return 0;
}