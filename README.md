Assignment-1

C-programming(Topic: Operators)

1. Arithmetic Operators + - * / %
Write a C program to input two numbers and print their sum, difference, product, quotient, and
remainder.
Write a program to calculate the area and perimeter of a rectangle.
Write a program to calculate the simple interest using arithmetic operators.
Write a program to input a 3-digit number and find the sum of its digits.
Write a program to convert seconds into hours, minutes, and seconds.
2. Relational Operators &lt; &gt; &lt;= &gt;= == !=
Write a program to input two numbers and check which number is greater.
Write a program to check whether a number is equal to zero, positive, or negative.
Write a program to input a student&#39;s marks and check whether the student has passed or failed.
Write a program to find the largest of two numbers using relational operators.
Write a program to check whether a given year is a leap year.
3. Logical Operators &amp;&amp; || !
Write a program to check whether a number lies between 10 and 50.
Write a program to check whether a person is eligible to vote based on age.
Write a program to check whether a number is divisible by both 3 and 5.
Write a program to check whether a number is positive and even.
Write a program to check whether a character is a vowel or consonant using logical operators.
4. Assignment Operators = += -= *= /= %=
Write a program to demonstrate all compound assignment operators.
Write a program that increases a number by 10 using +=.

Write a program that decreases a number by 5 using -=.
Write a program to calculate the final value of a variable after applying +=, -=, *=, and /=.
5. Bitwise Operators &amp; | ^ ~ &lt;&lt; &gt;&gt;
Write a C program to find the result of bitwise AND of two numbers.
Write a program to demonstrate AND, OR, and XOR operators.
Write a program to check whether a number is even or odd using bitwise AND.
Write a program to multiply a number by 2 using the left shift operator.
Write a program to divide a number by 2 using the right shift operator.
6. Conditional Operator ?:
Write a program to find the largest of two numbers using the conditional operator.
Write a program to check whether a number is even or odd using ?:.
Write a program to find the smallest of two numbers using ?:.
Write a program to check whether a person is eligible or not eligible to vote using ?:.
Write a program to find the largest of three numbers using nested conditional operators.
7. Increment and Decrement ++ --
Write a program to demonstrate pre-increment and post-increment.
Write a program to demonstrate pre-decrement and post-decrement.
8. Special Operators
Important special operators in C include sizeof, comma.
Write a program to find the size of int, float, char, and double using sizeof.
Write a program to use the comma operator and find the final value of a variable.
Find the output:
int a = 10; int a = 5, b = 3; int a = 5;

a += 5;
a *= 2;
a -= 4;
printf(&quot;%d&quot;, a);

printf(&quot;%d&quot;, a &amp; b);
printf(&quot;%d&quot;, a | b);
printf(&quot;%d&quot;, a ^ b);

printf(&quot;%d\n&quot;, ++a);
printf(&quot;%d\n&quot;, a++);
printf(&quot;%d\n&quot;, a);

int a = 10;
int b = a++;
printf(&quot;%d %d&quot;, a, b);

int a = 10;
int b = ++a;
printf(&quot;%d %d&quot;, a, b);

int a = 10, b = 3;
int c = a % b + a / b;
printf(&quot;%d&quot;, c);

int a = 5,b=2;
int c = a++ + ++b;
printf(&quot;%d %d %d&quot;, a, b,c);

int a = 10,b=20;
printf(&quot;%d&quot;, a &gt; b &amp;&amp; b &gt; 5);

int a = 5;
printf(&quot;%d&quot;, a &lt;&lt; 1);
printf(&quot;%d&quot;, a &gt;&gt; 1);
