// Find second max and second min in a user input array in C

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int sec_max = arr[0];
    int sec_min = arr[2];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }

        if (arr[i] < sec_min && arr[i] != min)
        {
            sec_min = arr[i];
        }
    }

    printf("The second max is %d and the second min is %d", sec_max, sec_min);

    return 0;
}