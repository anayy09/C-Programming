// write a code to implement struct in c

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %f\n", s1.marks);

    return 0;
}