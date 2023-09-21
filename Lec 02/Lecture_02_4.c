// Write a C program to merge 2 arrays (input from user)

#include <stdio.h>

int main() {

    int n,m;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    int arr1[n];
    
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    
    int arr2[m];
    
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int arr3[n+m];
    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }
    
    for (int i = 0; i < m; i++) {
        arr3[n+i] = arr2[i];
    }
    
    printf("The merged array is: ");
    for (int i = 0; i < n+m; i++) {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}