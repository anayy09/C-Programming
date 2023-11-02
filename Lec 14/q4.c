// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given(i.e.roll no.entered by the user).

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int age;
    char address[50];
};

int Age14(struct student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].age == 14)
        {
            printf("Student Name= %s , Roll no= %s , Age= %d , Address= %s\n", students[i].name, students[i].roll, students[i].age, students[i].address);
        }
    }
    return 0;
}

int EvenRoll(struct student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].roll % 2 == 0)
        {
            printf("Student Name= %s , Roll no= %s , Age= %d , Address= %s\n", students[i].name, students[i].roll, students[i].age, students[i].address);
        }
    }
    return 0;
}

int RollNo(struct student students[], int n, int roll)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].roll == roll)
        {
            printf("Student Name= %s , Roll no= %s , Age= %d , Address= %s\n", students[i].name, students[i].roll, students[i].age, students[i].address);
        }
    }
    return 0;
}

int main()
{
    int n = 3;
    struct student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Roll no: ");
        scanf("%d", &students[i].roll);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Address: ");
        scanf("%s", students[i].address);
    }

    printf("\nStudents with age 14:\n");
    Age14(students, n);
    printf("\nStudents with even roll no:\n");
    EvenRoll(students, n);
    printf("\nEnter roll no to search: ");
    int roll;
    scanf("%d", &roll);
    printf("\nStudents with roll no %d:\n", roll);
    RollNo(students, n, roll);

    return 0;
}