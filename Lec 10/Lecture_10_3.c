#include <stdio.h>

void test();

int main()
{
    int x, y;
    printf("First call\n");
    test();
    printf("Second call\n");
    test();
    printf("Third call\n");
    test();
    return 0;
}

void test()
{
    static int x = 10;
    int y = 10;
    x++;
    y++;
    printf("%d %d\n", x, y);
}