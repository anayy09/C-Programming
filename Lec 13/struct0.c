// write a code to implement struct in c using hardcode

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char* name;
    int roll;
    float marks;
};

int main()
{
    struct student s1 = {"Rahul", 1, 99.9};
    struct student s2;
    s2.name = "Rahul";
    s2.roll = 2;
    s2.marks = 99.8;
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %f\n", s2.marks);

    return 0;
}