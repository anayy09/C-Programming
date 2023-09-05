// Write a C program to swap 2 numbers using temp variable, arithmetic operators and bitwise operators.

#include <stdio.h>

int main()
{
    printf("Temp Variable\n");

    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    int c = 0;
    c = a;
    a = b;
    b = c;
    printf("Swapped Numbers\n");
    printf("A: %d", a);
    printf("\nB: %d", b);

    printf("\nArithmetic\n");

    int a1, b1;
    printf("Enter A: ");
    scanf("%d", &a1);
    printf("Enter B: ");
    scanf("%d", &b1);

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    printf("Swapped Numbers\n");
    printf("A: %d", a1);
    printf("\nB: %d", b1);

    printf("\nBitwise\n");

    int a2, b2;
    printf("Enter A: ");
    scanf("%d", &a2);
    printf("Enter B: ");
    scanf("%d", &b2);

    a2 = a2 ^ b2;
    b2 = a2 ^ b2;
    a2 = b2 ^ a2;

    printf("Swapped Numbers\n");
    printf("A: %d", a2);
    printf("\nB: %d", b2);

    return 0;
}