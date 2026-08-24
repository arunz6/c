// Write a C program to input two numbers and print their sum, difference, product, quotient, andremainder.

// #include <stdio.h>

// void main()
// {
//     int a;
//     int b;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);
//     printf("Sum : %d\n", a + b);
//     printf("Difference = %d\n", a - b);
//     printf("Product : %d\n", a * b);
//     printf("Quotient = %d\n", a / b);
//     printf("Remainder = %d\n", a % b);
// }

// Write a program to calculate the area and perimeter of a rectangle.

// #include <stdio.h>

// void main()
// {
//     int l, b;
//     int area;
//     int perimeter;

//     printf("Enter length: ");
//     scanf("%d", &l);

//     printf("Enter breadth: ");
//     scanf("%d", &b);

//     area = l * b;
//     perimeter = 2 * (l + b);

//     printf("Area = %.2d\n", area);
//     printf("Perimeter = %.2d\n", perimeter);
// }

// Write a program to calculate the simple interest using arithmetic operators.
// #include <stdio.h>

// int main()
// {
//     int p, r, t, smpintrst;

//     printf("Enter principal amount: ");
//     scanf("%d", &p);

//     printf("Enter rate    of interest: ");
//     scanf("%d", &r);

//     printf("Enter time in years: ");
//     scanf("%d", &t);

//     smpintrst = (p * r * t) / 100;

//     printf("Simple Interest = %d\n", smpintrst);

//     return 0;
// }

// Write a program to input a 3-digit number and find the sum of its digits
// question he samajh nai aya .

// Write a program to convert seconds into hours, minutes, and seconds.
// #include <stdio.h>
// int main()
// {
//     int ts;
//     int h, m, sec;

//     printf("Enter total seconds: ");
//     scanf("%d", &ts);

//     h = ts / 3600;
//     ts = ts % 3600;

//     m = ts / 60;
//     sec = ts % 60;

//     printf("Hours = %d\n", h);
//     printf("Minutes = %d\n", m);
//     printf("Seconds = %d\n", sec);

//     return 0;
// }

// 2. Relational Operators &lt; &gt; &lt;= &gt;= == !=

// Write a program to input two numbers and check which number is greater.
// #include <stdio.h>
// int main()
// {
//     int a,b;

//     printf("Enter first number: ");
//     scanf("%d",&a);

//     printf("Enter second number: ");
//     scanf("%d", &b);

//     if(a>b)
//         printf("  greater %d",a);
//     else
//         printf("  greater %d", b);

//     return 0;
// }

// // Write a program to check whether a number is equal to zero, positive, or negative.
// #include <stdio.h>
// int main()
// {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n >= 0)
//         printf("Number is positive");
//     else
//         printf("Number is negative");

//     return 0;
// }

// Write a program to input a student&#39;s marks and check whether the student has passed or failed.

// #include <stdio.h>
// int main()
// {
//     int marks;

//     printf("Enter marks: ");
//     scanf("%d",&marks);

//     if(marks>=33)
//         printf("Passed\n");
//     else
//         printf("Failed\n");

//     return 0;
// }

// // Write a program to find the largest of two numbers using relational operators.
// #include <stdio.h>
// int main()
// {
//     int x,y,large;

//     printf("Enter first number: ");
//     scanf("%d", &x);

//     printf("Enter second number: ");
//     scanf("%d",&y);

//     if(x>=y)
//         large = x;
//     else
//         large=y;

//     printf("Largest number = %d\n", large);

//     return 0;
// }
