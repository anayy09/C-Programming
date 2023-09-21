#include <stdio.h>

int main()
{
    int a = 50, b = 10;
    int c;
    printf("Enter a value");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Sum of %d and %d is %d\n", a, b, a + b);
        break;
    case 2:
        printf("Difference of %d and %d is %d\n", a, b, a - b);
        break;
    case 3:
        printf("Multiplication of %d and %d is %d\n", a, b, a * b);
        break;
    case 4:
        printf("Division of %d and %d is %d\n", a, b, a / b);
        break;

    default:
        printf("Enter between 1 to 4");
        break;
    }
    return 0;
}