// write a c program to write and read from a file (user input) and count the number of characters, words and lines in the file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file2.txt", "w");
    char c;
    printf("Enter a string: ");
    scanf("%c", &c);
    while (c != '\n')
    {
        fprintf(fptr, "%c", c);
        scanf("%c", &c);
    }
    fclose(fptr);

    fptr = fopen("file2.txt", "r");
    c = fgetc(fptr);
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    printf("The file content is: \n");
    while (c != EOF)
    {
        if (c == '\n')
            lineCount++;
        else if (c == ' ')
            wordCount++;
        else
            charCount++;
        
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    printf("\n");
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount + 1);
    printf("Number of lines: %d\n", lineCount + 1);

    return 0;
}