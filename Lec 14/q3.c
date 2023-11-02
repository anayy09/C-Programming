// Create a structure named Date having day, month and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct Date current_date;
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &current_date.day, &current_date.month, &current_date.year);
    
    current_date.day += 15;
    current_date.month++;

    if (current_date.month > 12)
    {
        current_date.month -= 12;
        current_date.year++;
    }

    printf("Final date is %d %d %d\n", current_date.day, current_date.month, current_date.year);

    return 0;
}