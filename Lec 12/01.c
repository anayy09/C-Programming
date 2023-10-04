#include <stdio.h>
#define Prod(a, b) a *b

int main()
{
    int x = 3, y = 4;
    printf("%d\n", Prod(x + 2, y - 1));
    return 0;
}