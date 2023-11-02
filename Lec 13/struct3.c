// write a code using struct to input 3 students details and print them using array of struct.

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name, Roll no, and Marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Student %d : Name= %s , Roll no= %d , Marks= %.2f\n", i + 1, students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}