// Write a C program to input two numbers and print their sum, difference, product, quotient, andremainder.

#include <stdio.h>

void main()
{
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum : %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product : %d\n", a * b);
    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", a % b);
}

// Write a program to calculate the area and perimeter of a rectangle.

#include <stdio.h>
void main()
{
    int l, b;
    int area;
    int perimeter;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area = %.2d\n", area);
    printf("Perimeter = %.2d\n", perimeter);
}

// Write a program to calculate the simple interest using arithmetic operators.
#include <stdio.h>

int main()
{
    int p, r, t, smpintrst;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate    of interest: ");
    scanf("%d", &r);
    printf("Enter time in years: ");
    scanf("%d", &t);
    smpintrst = (p * r * t) / 100;
    printf("Simple Interest = %d\n", smpintrst);
    return 0;
}

// Write a program to input a 3-digit number and find the sum of its digits
// question he samajh nai aya .

// Write a program to convert seconds into hours, minutes, and seconds.

#include <stdio.h>

int main()
{
    int ts;
    int h, m, sec;
    printf("Enter total seconds: ");
    scanf("%d", &ts);
    h = ts / 3600;
    ts = ts % 3600;
    m = ts / 60;
    sec = ts % 60;
    printf("Hours = %d\n", h);
    printf("Minutes = %d\n", m);
    printf("Seconds = %d\n", sec);
    return 0;
}

// 2. Relational Operators &lt; &gt; &lt;= &gt;= == !=

// Write a program to input two numbers and check which number is greater.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a > b)
        printf("  greater %d", a);
    else
        printf("  greater %d", b);
    return 0;
}

// // Write a program to check whether a number is equal to zero, positive, or negative.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("Number is positive");
    else
        printf("Number is negative");
    return 0;
}

// Write a program to input a student&#39;s marks and check whether the student has passed or failed.

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 33)
        printf("Passed\n");
    else
        printf("Failed\n");
    return 0;
}

// // Write a program to find the largest of two numbers using relational operators.

#include <stdio.h>
int main()
{
    int x, y, large;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    if (x >= y)
        large = x;
    else
        large = y;
    printf("Largest number = %d\n", large);
    return 0;
}

// Write a program to check whether a given year is a leap year.
// ye question nai aya

// 3. Logical Operators &amp;&amp; || !

// Write a program to check whether a number lies between 10 and 50.
#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50)
        printf("Number lies between 10 and 50");
    else
        printf("Number is not in range");

    return 0;
}

// // Write a program to check whether a person is eligible to vote based on age.
#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18 && age > 0)
        printf("  Not eligible to vote");
    else
        printf("Eligible to vote ");

    return 0;
}

// Write a program to check whether a number is divisible by both 3 and 5.
#include <stdio.h>
void main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 3 == 0)
    {
        printf("divisible by both both");
    }
    else
    {
        printf("Not divisible by both");
    }
}

// Write a program to check whether a number is positive and even.
#include <stdio.h>
int main()
{

    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if (a > 0 && a % 2 == 0)
    {
        printf("number is positive and even ");
    }
    else
    {
        printf("not positivee and even ");
    }
    return 0;
}

// // Write a program to check whether a character is a vowel or consonant using logical operators.
#include <stdio.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

// logical oprator done

// 4. Assignment Operators = += -= *= /= %=

// Write a program to demonstrate all compound assignment operators.

#include <stdio.h>
int main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    a += 5;
    printf("a += 5  : %d\n", a);

    a -= 3;
    printf("a -= 3  : %d\n", a);

    a *= 2;
    printf("a *= 2  : %d\n", a);

    a /= 4;
    printf("a /= 4  : %d\n", a);

    a %= 3;
    printf("a %%= 3  : %d\n", a);
    return 0;
}

// Write a program that increases a number by 10 using +=.

#include <stdio.h>
int main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    a += 10;
    printf("value is incresed by 10 using += %d", a);
    return 0;
}

// Write a program that decreases a number by 5 using -=.

#include <stdio.h>
int main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    a -= 5;
    printf("value is incresed by 10 using += %d", a);
    return 0;
}

// Write a program to calculate the final value of a variable after applying +=, -=, *=, and /=.

#include <stdio.h>

int main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    a += 10;
    a -= 5;
    a *= 2;
    a /= 5;
    printf("Final value of a = %d", a);
    return 0;
}

// 5. Bitwise Operators &amp; | ^ ~ &lt;&lt; &gt;&gt;

// ye bad me karunga

// 6. Conditional Operator ?:

// Write a program to find the largest of two numbers using the conditional operator.

#include <stdio.h>

int main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    int b;
    printf("give the value");
    scanf("%d", &b);
    a > b ? printf("a is bigger ") : printf("b is bigger ");
    return 0;
}

// Write a program to check whether a number is even or odd using ?:.

#include <stdio.h>

void main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);

    a % 2 == 0 ? printf("a is even ") : printf("a is odd");
}

// Write a program to find the smallest of two numbers using ?:.

#include <stdio.h>

void main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);
    int b;
    printf("give the value");
    scanf("%d", &b);

    a > b ? printf("b is smaller  ") : printf("a is smaller ");
}

// Write a program to check whether a person is eligible or not eligible to vote using ?:.

#include <stdio.h>

void main()
{
    int a;
    printf("give the value");
    scanf("%d", &a);

    a >= 18 ? printf("eligible  for vote ") : printf(" not eligible for vote  ");
}

// Write a program to find the largest of three numbers using nested conditional operators.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Give the value of a: ");
    scanf("%d", &a);

    printf("Give the value of b: ");
    scanf("%d", &b);

    printf("Give the value of c: ");
    scanf("%d", &c);

    printf("Largest number = %d",
           (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));

    return 0;
}

// 7. Increment and Decrement ++ --

// Write a program to demonstrate pre-increment and post-increment.

#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value of a = %d\n", a);

    // Pre-increment
    printf("Pre-increment = %d\n", ++a);

    // Post-increment
    printf("Post-increment = %d\n", a++);

    printf("Value after post-increment = %d\n", a);

    return 0;
}
