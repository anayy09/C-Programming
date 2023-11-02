// write a code to implement struct in c and use size and strcpy

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct student s1;
    struct student s2;
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);

    printf("Size of struct: %d\n", sizeof(s1));
    printf("Size of name: %d\n", sizeof(s1.name));
    printf("Size of roll: %d\n", sizeof(s1.roll));
    printf("Size of marks: %d\n", sizeof(s1.marks));

    strcpy(s2.name, "Rahul");
    printf("Name: %s\n", s2.name);

    return 0;
}