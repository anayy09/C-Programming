#include <stdio.h>

int main()
{
     short int i = 20;
     char c = 97;
     printf("%d %d %d", sizeof(i), sizeof(c), sizeof(i + c));
     return 0;
}