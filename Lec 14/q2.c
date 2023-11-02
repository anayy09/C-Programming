// Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
// 1 - Write a function to print the names of all the customers having balance less than Rs .2000.
// 2 - Write a function to add Rs .1000 in the balance of all the customers having more than Rs .10000 in their balance and then print the incremented value of their balance.

#include <stdio.h>

struct customer
{
    char name[50];
    long int account_number;
    float balance;
};

int LessThan2000(struct customer customers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance < 2000)
        {
            printf("Customer Name= %s , Account Number= %ld , Balance= %.2f\n", customers[i].name, customers[i].account_number, customers[i].balance);
        }
    }
    return 0;
}

int MoreThan10000(struct customer customers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (customers[i].balance > 10000)
        {
            customers[i].balance += 1000;
            printf("Customer Name= %s , Account Number= %ld , Balance= %.2f\n", customers[i].name, customers[i].account_number, customers[i].balance);
        }
    }
    return 0;
}

int main()
{
    int n = 3;
    struct customer customers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", customers[i].name);
        printf("Enter Account Number: ");
        scanf("%d", &customers[i].account_number);
        printf("Enter Balance: ");
        scanf("%f", &customers[i].balance);
    }

    printf("\nCustomers with balance less than Rs. 2000:\n");
    LessThan2000(customers, n);
    printf("\nCustomers with balance more than Rs. 10000:\n");
    MoreThan10000(customers, n);

    return 0;
}