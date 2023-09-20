#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50}, j, *p;
    p = a;
    for (j = 0; j < 5; j++)
    {
        printf("%d", *a);
        p++;
    }
    return 0;
}