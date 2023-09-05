// write a c program using the strlen, strrev and strcat functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The length of the string is %d\n", strlen(str));
    printf("The reverse of the string is %s\n", strrev(str));
    printf("The string concatenated with itself is %s\n", strcat(str, str));
    return 0;
}