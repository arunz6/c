// // question no 1     mean
// #include <stdio.h>

// int main()
// {

//     int arrelemetno;
//     float sum;
//     printf("give how many value you want in array ");
//     scanf("%d", &arrelemetno);
//     float a[arrelemetno] = {};
//     for (int i = 0; i < arrelemetno; i++)
//     {
//         printf("give the value");
//         scanf("%f", &a[i]);
//     }
//     for (int i = 0; i < arrelemetno; i++)
//     {
//         sum += a[i];
//     }
//     printf("mean is %f", sum / arrelemetno);

//     return 0;
// }

// // question no 2 median

// #include <stdio.h>

// int main()
// {
//     int arrelemetno;
//     float median;
//     float temp;

//     printf("Give how many values you want in array: ");
//     scanf("%d", &arrelemetno);

//     float a[arrelemetno];

//     // Input values
//     for (int i = 0; i < arrelemetno; i++)
//     {
//         printf("Give the value: ");
//         scanf("%f", &a[i]);
//     }

//     // Sort array
//     for (int i = 0; i < arrelemetno - 1; i++)
//     {
//         for (int j = i + 1; j < arrelemetno; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     // Calculate median
//     if (arrelemetno % 2 != 0)
//     {
//         // Odd number of elements
//         median = a[arrelemetno / 2];
//     }
//     else
//     {
//         // Even number of elements
//         median = (a[arrelemetno / 2] +
//                   a[(arrelemetno / 2) - 1]) / 2.0;
//     }

//     printf("Median is: %.2f\n", median);

//     return 0;
// }
