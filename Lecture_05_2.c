// Write a program to reverse a 3-digit number which is entered from keyboard. E.g.-
// INPUT : 132 OUTPUT : 231

#include <stdio.h>
int main() {
    int a, rev = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a);
    while (a != 0) {
        rev = rev * 10 + a % 10;
        a /= 10;
    }
    printf("Reverse: %d", rev);
    return 0;
}