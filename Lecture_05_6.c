// Write a C program for finding Prime number or not

#include <stdio.h>

int main()
{
    int a, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        for (int i = 2; i*i < a; i++)
        {
            if (a % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d is a Prime number", a);
        }
        else
        {
            printf("%d is not a Prime number", a);
        }
    }
    return 0;
}
