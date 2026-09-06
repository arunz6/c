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