// Write a program to calculate the sum of the first and the second last digit of a 5 digit number entered from the keyboard.

#include<stdio.h>
int main() {
    int a, sum = 0;
    printf("Enter a 5-digit number: ");
    scanf("%d", &a);
    a /= 10;
    sum += a % 10;
    a /= 1000;
    sum += a % 10;
    printf("Sum: %d", sum);
    return 0;
}