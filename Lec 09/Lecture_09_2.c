// Use the string functions, strlen, strrev, strcat, strupr, strlwr and then use the traditional methods with these functions to perform the same task.

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
    printf("The string in uppercase is %s\n", strupr(str));
    printf("The string in lowercase is %s\n", strlwr(str));
    return 0;
}