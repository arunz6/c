// dsa questions lab assignment

// //C program to input 10 elements into an array and display the elements and their total count
#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    // Input 10 elements
    printf("Enter 10 elements:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nElements of the array are:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // Display number of elements
    printf("\n\nNumber of elements present in array = %d\n", 10);

    return 0;
}

// //  c program to read n elemet and give sum and avrage
#include <stdio.h>

int main()
{

    int a[] = {12, 21, 32, 1, 2, 3, 4, 5, 2, 3};
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        n = n + a[i];
    }
    printf("sum of all element  %d\n", n);
    int avg = n / 10;
    printf(" avrage of the elemets  %d", avg);
    return 0;
}

// // c program to find largest and smallest element
#include <stdio.h>

int main()
{

    int a[] = {12, 21, 32, 1, 2, 3, 4, 5, 2, 3};
    int bigger = a[0];
    int chota = a[0];

    for (int i = 0; i < 10; i++)
    {
        if (bigger < a[i])
        {
            bigger = a[i];
        }
        if (chota > a[i])
        {
            chota = a[i];
        }
    }
    printf(" bada %d\n", bigger);
    printf(" chota %d", chota);

    return 0;
}

// // c program for inser element on specfic postions
#include <stdio.h>

int main()
{

    int a[] = {12, 21, 32, 1, 2, 3, 4, 5, 2, 3};
    int indx;
    int val;
    printf("give the index you want to change ");
    scanf("%d", &indx);
    printf("give the value you want to change ");
    scanf("%d", &val);

    a[indx] = val;
    printf("chnaged value on index %d", a[indx]);

    for (int i = 0; i < 10; i++)
    {
        printf("chnaged value on index %d\n", a[i]);
    }
    return 0;
}

// // c program for print revers array
#include <stdio.h>

int main()
{

    int arrlength;

    printf("Give how many values you want in array: ");
    scanf("%d", &arrlength);

    int arr[arrlength];

    for (int i = 0; i < arrlength; i++)
    {
        printf("Give the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse: ");

    for (int i = arrlength - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// write a c program to count odd  even

#include <stdio.h>

int main()
{

    int arrlength;
    int odd = 0, even = 0;

    printf("Give how many values you want in array: ");
    scanf("%d", &arrlength);

    int arr[arrlength];

    for (int i = 0; i < arrlength; i++)
    {
        printf("Give the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("array have  %d odd  vales", odd);
    printf("and %d even values", even);
    return 0;
}

//  write a program to copy all element in 1 array to other

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("elements of second array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

// write a program to search a element in array

#include <stdio.h>

int main()
{
    int n;
    int element;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("enter the number you want to find in array : ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            printf("value is present ");
        }
    }

    return 0;
}

// program to shorrt a array in c

#include <stdio.h>

int main()
{
    int n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}