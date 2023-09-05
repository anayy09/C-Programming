// Write a C program to merge 2 sorted arrays into 1 sorted array

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int b[m];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[n + m];
    int i = 0, j = 0, k = 0;
    while (k <= (n + m))
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else if (i == n)
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else if (j == m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
    printf("The merged array is: ");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}