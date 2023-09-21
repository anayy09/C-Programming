// Add Function (Call by Value)

#include<stdio.h>

int add(int,int);

int main() {
    int a = 10, b = 20;
    int sum = add(a, b);
    printf("Sum of %d and %d is %d\n", a, b, sum);
    return 0;
}

int add(int a, int b) {
    return a + b;
}