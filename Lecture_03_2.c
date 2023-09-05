// write a C program to find the diagonal (left and right) sum of a 3 x 3 matrix

#include <stdio.h>

int main()
{
    int a[3][3], i, j;
    int s1 = 0;
    int s2 = 0;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (i == j)
            {
                s1 += a[i][j];
            }
        }
    }
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (i + j == 2)
            {
                s2 += a[i][j];
            }
        }
    }
    printf("The sum of left diagonal is %d\n", s1);
    printf("The sum of right diagonal is %d\n", s2);
    return 0;
}