#include <stdio.h>

int main()
{
    char v;
    printf("Enter a character value: ");
    scanf("%c", &v);
    switch (v)
    {
    case 'A':
        printf("A is a vowel");
        break;
    case 'E':
        printf("E is a vowel");
        break;
    case 'I':
        printf("I is a vowel");
        break;
    case 'O':
        printf("O is a vowel");
        break;
    case 'U':
        printf("U is a vowel");
        break;
    case 'a':
        printf("a is a vowel");
        break;
    case 'e':
        printf("e is a vowel");
        break;
    case 'i':
        printf("i is a vowel");
        break;
    case 'o':
        printf("o is a vowel");
        break;
    case 'u':
        printf("u is a vowel");
        break;

    default:
        printf("It is a consonant");
        break;
    }
    return 0;
}