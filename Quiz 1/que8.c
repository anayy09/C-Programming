// write a c program for counting vowel and constant in the given string "Hello World".

#include <stdio.h>

int main() {
    int i = 0;
    int vowel = 0, constant = 0;
    char str[] = "Hello World";
    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }        
        else {
            constant++;
        }
        i++;
    }
    printf("Vowel: %d\nConstant: %d", vowel, constant);
    return 0;
}