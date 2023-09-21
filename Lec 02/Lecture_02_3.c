// Write a C program for linear search

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

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("The number is not present in the array");
    }
    else
    {
        printf("The number is present at index %d", index);
    }

    return 0;
}