// #include <stdio.h>

// int main()
// {

//     // swap a number with 3rd value
//     int a, b;
//     printf("give the value 1st value");
//     scanf("%d", &a);
//     printf("give the value 2st value");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("now a is %d", a);
//     printf("b value is %d", b);
// }

// // this code is for swap a to b with temp var

// #include <stdio.h>

// int main()
// {

//     // swap a number with 3rd value
//     int a, b;
//     printf("give the value 1st value");
//     scanf("%d", &a);
//     printf("give the value 2st value");
//     scanf("%d", &b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("now a is %d", a);
//     printf("b value is %d", b);
// }

// // swap var without temp var
// #include <stdio.h>

// int main()
// {

//     // swap a number with 3rd value
//     int a, b;
//     printf("give the value 1st value");
//     scanf("%d", &a);
//     printf("give the value 2st value");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("now a is %d\n", a);
//     printf("b value is %d", b);
// }

// swap 3 var without temp

// #include <stdio.h>

// int main()
// {

//     // swap a number with 3rd value
//     int a, b,c;
//     printf("give the value 1st value");
//     scanf("%d", &a);
//     printf("give the value 2st value");
//     scanf("%d", &b);
//      printf("give the value 3st value");
//     scanf("%d", &c);
//  a = a + b + c;
//     c = a - b - c;
//     b = a - b - c;
//     a = a - b - c;
//     printf("now a is %d\n", a);
//     printf("b value is %d\n", b);
//       printf("c value is %d", c);

// }

#include <stdio.h>

int main()
{

    float arr[10];
    float temp;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter element: ");
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    printf("\n%.0f is the largest number\n", temp);

    return 0;
}
