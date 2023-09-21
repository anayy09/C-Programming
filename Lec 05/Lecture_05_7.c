// Write a C program to implement Bubble Sort

#include <stdio.h>

int main() {
    int arr[] = {12, 23, 34, 22, 14, 10, 5, 7, 4, 9, 3, 40, 19, 9, 67};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < arr_len; i++) {
        for (int j = 0; j < arr_len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }    
    }
    printf("Sorted array: ");
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}