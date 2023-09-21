#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("The sum is %d\n", a + b);

    int c = 5;
    printf("%d %d %d %d %d", c++, --c, --c, ++c, c++);

    int d;

    scanf("%d", &d);

    if (d % 2 == 0)
    {
        printf("%d is even", d);
    }
    else
    {
        printf("%d is odd", d);
    }

    return 0;
}
