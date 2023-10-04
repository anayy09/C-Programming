#include <stdio.h>

enum level
{
    LOW = 1,
    MEDIUM,
    HIGH
};

int main()
{
    enum level l = MEDIUM;
    switch (l)
    {
    case 1:
        printf("Hello Case 1\n");
        break;
    case 2:
        printf("Hello Case 2\n");
        break;
    case 3:
        printf("Hello Case 3\n");
        break;
    }
    return 0;
}