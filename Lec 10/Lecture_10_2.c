// write a c program for showing difference between auto, static, register and extern storage class

#include<stdio.h>

int main()
{
    int a;
    char ch;
    static int b;
    static char ch2[10];
    register int c;
    register char ch3;
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    printf("Value of c is %d\n", c);
    printf("Value of ch is %c\n", ch);
    printf("Value of ch2 is %s\n", ch2);
    printf("Value of ch2[1] is %c\n", ch2[1]);
    printf("Value of ch3 is %c\n", ch3);
    return 0;
}