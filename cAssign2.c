// Questions on if

// Q1. Positive Number - Write a C program to input a number and print
// "Positive" if the number is greater than 0.

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Not Positive");
    }
    return 0;
}

// Q2. Even Number- Write a program to input a number and print "Even" if
// the number is divisible by 2

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Not Even");
    }
    return 0;
}

// Q3. Divisible by 5- Write a program to input a number and print "Divisible
// by 5" if it is divisible by 5.

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}

// Q4. Positive and Even- Write a program to check whether a number is
// positive and even using if.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0 && num % 2 == 0)
    {
        printf("Positive and Even");
    }
    else
    {
        printf("Not Positive and Even");
    }
    return 0;
}

// Q5. Salary Check-Write a program to input salary and print "High Salary" if
// salary is greater than ₹50,000.

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int salary;
    printf("Enter salary: ");
    scanf("%d", &salary);
    if (salary > 50000)
    {
        printf("High Salary");
    }
    else
    {
        printf("Not High Salary");
    }
    return 0;
}