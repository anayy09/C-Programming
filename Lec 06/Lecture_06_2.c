// swap Function (Call by Reference)

#include<stdio.h>

int swap(int*, int*);

int main() {
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);
    printf("After Swap : %d and %d",a ,b );
    return 0;
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y =temp;
    return 0;
}