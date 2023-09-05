// Suppose you entered a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
// For example, if he entered number is 5696, then the displayed number should be 7818. (Use while loop)

#include<stdio.h>
int main() {
    int a, rev = 0, ans = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &a);
    while (a != 0) {
        rev = rev * 10 + (a % 10 + 2) % 10;
        a /= 10;
    }
    while (rev != 0)
    {
        ans = ans * 10 + rev % 10;
        rev /= 10;
    }
    printf("Number: %d", ans);
    return 0;
}
