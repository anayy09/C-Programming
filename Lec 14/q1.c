// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student. Your program should also display the name of the student getting the highest percentage.

#include <stdio.h>

struct Marks
{
    char name[50];
    char roll[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main()
{
    int n = 5;
    struct Marks students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name, Roll no, Chemistry marks, Mathematics marks, and Physics marks for student %d: ", i + 1);
        scanf("%s %s %f %f %f", students[i].name, students[i].roll, &students[i].chem_marks, &students[i].maths_marks, &students[i].phy_marks);
    }

    float max_percentage = 0;
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        float percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3;
        printf("Student %d : Name= %s , Roll no= %s , Percentage= %.2f\n", i + 1, students[i].name, students[i].roll, percentage);
        if (percentage > max_percentage)
        {
            max_percentage = percentage;
            max_index = i;
        }
    }

    printf("Student with highest percentage is %s with percentage %.2f\n", students[max_index].name, max_percentage);

    return 0;
}