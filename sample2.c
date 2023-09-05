// write a c programm to add 2 integers

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of %d and %d is %d",a,b,c);
    return 0;
}