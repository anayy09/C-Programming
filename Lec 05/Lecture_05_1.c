// Write a program to calculate the sum of the digits of a 3-digit number which is entered from keyboard. E.g.-
// INPUT : 132        OUTPUT : 6

#include<stdio.h>
int main() {
    int a, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a);
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }
    printf("Sum: %d", sum);
    return 0;
}
