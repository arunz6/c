# Assignment-1
## C Programming (Topic: Operators)

---

### 1. Arithmetic Operators `+ - * / %`
1. Write a C program to input two numbers and print their sum, difference, product, quotient, and remainder.
2. Write a program to calculate the area and perimeter of a rectangle.
3. Write a program to calculate the simple interest using arithmetic operators.
4. Write a program to input a 3-digit number and find the sum of its digits.
5. Write a program to convert seconds into hours, minutes, and seconds.

---

### 2. Relational Operators `< > <= >= == !=`
1. Write a program to input two numbers and check which number is greater.
2. Write a program to check whether a number is equal to zero, positive, or negative.
3. Write a program to input a student's marks and check whether the student has passed or failed.
4. Write a program to find the largest of two numbers using relational operators.
5. Write a program to check whether a given year is a leap year.

---

### 3. Logical Operators `&& || !`
1. Write a program to check whether a number lies between 10 and 50.
2. Write a program to check whether a person is eligible to vote based on age.
3. Write a program to check whether a number is divisible by both 3 and 5.
4. Write a program to check whether a number is positive and even.
5. Write a program to check whether a character is a vowel or consonant using logical operators.

---

### 4. Assignment Operators `= += -= *= /= %=`
1. Write a program to demonstrate all compound assignment operators.
2. Write a program that increases a number by 10 using `+=`.
3. Write a program that decreases a number by 5 using `-=`.
4. Write a program to calculate the final value of a variable after applying `+=`, `-=`, `*=`, and `/=`.

---

### 5. Bitwise Operators `& | ^ ~ << >>`
1. Write a C program to find the result of bitwise AND of two numbers.
2. Write a program to demonstrate AND, OR, and XOR operators.
3. Write a program to check whether a number is even or odd using bitwise AND.
4. Write a program to multiply a number by 2 using the left shift operator.
5. Write a program to divide a number by 2 using the right shift operator.

---

### 6. Conditional Operator `?:`
1. Write a program to find the largest of two numbers using the conditional operator.
2. Write a program to check whether a number is even or odd using `?:`.
3. Write a program to find the smallest of two numbers using `?:`.
4. Write a program to check whether a person is eligible or not eligible to vote using `?:`.
5. Write a program to find the largest of three numbers using nested conditional operators.

---

### 7. Increment and Decrement `++ --`
1. Write a program to demonstrate pre-increment and post-increment.
2. Write a program to demonstrate pre-decrement and post-decrement.

---

### 8. Special Operators
Important special operators in C include `sizeof`, comma.
1. Write a program to find the size of int, float, char, and double using `sizeof`.
2. Write a program to use the comma operator and find the final value of a variable.

---

### 9. Find the Output

```c
int a = 10;
a += 5;
a *= 2;
a -= 4;
printf("%d", a);
```

```c
int a = 5, b = 3;
printf("%d", a & b);
printf("%d", a | b);
printf("%d", a ^ b);
printf("%d\n", ++a);
printf("%d\n", a++);
printf("%d\n", a);
```

```c
int a = 10;
int b = a++;
printf("%d %d", a, b);
```

```c
int a = 10;
int b = ++a;
printf("%d %d", a, b);
```

```c
int a = 10, b = 3;
int c = a % b + a / b;
printf("%d", c);
```

```c
int a = 5, b = 2;
int c = a++ + ++b;
printf("%d %d %d", a, b, c);
```

```c
int a = 10, b = 20;
printf("%d", a > b && b > 5);
```

```c
int a = 5;
printf("%d", a << 1);
printf("%d", a >> 1);
```
