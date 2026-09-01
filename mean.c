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

// code for mode for indivisual serise

#include <stdio.h>

int main()
{
    int arrelemetno;
    printf("Give how many values you want in array: ");
    scanf("%d", &arrelemetno);
    float a[arrelemetno];

    for (int i = 0; i < arrelemetno; i++)
    {
        printf("Give  value ");
        scanf("%f", &a[i]);
    }
    int count[arrelemetno];
    for (int i = 0; i < arrelemetno; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < arrelemetno; i++)
    {
        for (int j = 0; j < arrelemetno; j++)
        {
            if (a[i] == a[j])
                count[i]++;
        }
    }
    int maxCount = 0;
    for (int i = 0; i < arrelemetno; i++)
    {
        if (count[i] > maxCount)
            maxCount = count[i];
    }
    if (maxCount == 1)
    {
        printf("No mode (all values are unique)\n");
        return 0;
    }
    printf("Mode: ");
    for (int i = 0; i < arrelemetno; i++)
    {
        if (count[i] == maxCount)
        {
            int alreadyPrinted = 0;
            for (int k = 0; k < i; k++)
            {
                if (a[k] == a[i])
                {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted)
                printf("%.2f ", a[i]);
        }
    }
    printf("\n");

    return 0;
}