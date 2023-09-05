#include <stdio.h>

int main()
{
    int a = 10 / 45 * 23 % 45 / (45 % 4 * 21);
    printf("%d", a);

    float b = 10 + 45.0 * 23 - 45 + (4 * 21.0);
    printf("\n%f", b);

    printf("\n%d", 1 == 5 == 5);

    int d = 15;
    printf("\n%d", ++d);
    printf("\n%d", d++);
    printf("\n%d", --d);
    printf("\n%d", d--);

    printf("\n%d", 4 > 5 && 5 > 4);
    printf("\n%d", 4 > 5 || 5 > 4);
    printf("\n%d", (232 + 23 * 1233) || 0);
    printf("\n%d", (232 + 23 * 1233) && 0);

    return 0;
}