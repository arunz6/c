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

    return 0;
}

// Questions on if-else

// Q1. Positive or Negative- Write a program to input a number and check
// whether it is positive or negative.

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
        printf("Negative");
    }
    return 0;
}

// Q2. Pass or Fail - Write a program to input marks and print: Pass if marks are 40 or above, Fail otherwise.

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}

// Q3. Profit or Loss - Input cost price and selling price. Print whether there is a profit or loss.
#include <stdio.h>

int main()
{
    int cost_price, selling_price;
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter selling price: ");
    scanf("%d", &selling_price);
    if (selling_price > cost_price)
    {
        printf("Profit");
    }
    else if (selling_price < cost_price)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}

// Q4. Number is Zero or Not - Write a program to check whether a number is zero or non-zero.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non-Zero");
    }
    return 0;
}

// Q5. Divisible by 3 - Write a program to check whether a number is divisible by 3 or not.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0)
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Not divisible by 3");
    }
    return 0;
}

// Questions on else-if Ladder

// Q1. Grade Calculation- Input marks and display:
// 90–100 → A
// 80–89 → B
// 70–79 → C
// 60–69 → D
// Below 60 → F

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90)
    {
        printf("A");
    }
    else if (marks >= 80)
    {
        printf("B");
    }
    else if (marks >= 70)
    {
        printf("C");
    }
    else if (marks >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}

// Q2. Number Range- Write a program to check whether a number is:
// 1–10 → Small
// 11–50 → Medium
// 51–100 → Large
// Above 100 → Very Large

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 10)
    {
        printf("Small");
    }
    else if (num >= 11 && num <= 50)
    {
        printf("Medium");
    }
    else if (num >= 51 && num <= 100)
    {
        printf("Large");
    }
    else
    {
        printf("Very Large");
    }
    return 0;
}

// Q3. Temperature- Input temperature and display:
// Above 40 → Very Hot
// 30–40 → Hot
// 20–29 → Normal
// 10–19 → Cold
// Below 10 → Very Cold

#include <stdio.h>

int main()
{
    int temperature;
    printf("Enter temperature: ");
    scanf("%d", &temperature);
    if (temperature > 40)
    {
        printf("Very Hot");
    }
    else if (temperature >= 30)
    {
        printf("Hot");
    }
    else if (temperature >= 20)
    {
        printf("Normal");
    }
    else if (temperature >= 10)
    {
        printf("Cold");
    }
    else
    {
        printf("Very Cold");
    }
    return 0;
}

// Q4. Age Category- Input age and display:
// 0–12 → Child
// 13–19 → Teenager
// 20–59 → Adult
// 60+ → Senior Citizen

#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12)
    {
        printf("Child");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior Citizen");
    }
    return 0;
}
