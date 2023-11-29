// write a c program to write, append and read from a file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file1.txt", "w");
    fprintf(fptr, "Hello World!\n");
    fprintf(fptr, "World Hello\n");
    fclose(fptr);

    fptr = fopen("file1.txt", "a");
    fprintf(fptr, "This is a new line\n");
    fclose(fptr);

    fptr = fopen("file1.txt", "r");
    char c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}