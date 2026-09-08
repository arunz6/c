// // question no 1     mean for  indivisual  serise
#include <stdio.h>

int main()
{

    int arrelemetno;
    float sum;
    printf("give how many value you want in array ");
    scanf("%d", &arrelemetno);
    float a[arrelemetno] = {};
    for (int i = 0; i < arrelemetno; i++)
    {
        printf("give the value");
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < arrelemetno; i++)
    {
        sum += a[i];
    }
    printf("mean is %f", sum / arrelemetno);

    return 0;
}

// // question no 2 median for indivisual  serise

#include <stdio.h>

int main()
{
    int arrelemetno;
    float median;
    float temp;

    printf("Give how many values you want in array: ");
    scanf("%d", &arrelemetno);

    float a[arrelemetno];

    // Input values
    for (int i = 0; i < arrelemetno; i++)
    {
        printf("Give the value: ");
        scanf("%f", &a[i]);
    }

    // Sort array
    for (int i = 0; i < arrelemetno - 1; i++)
    {
        for (int j = i + 1; j < arrelemetno; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Calculate median
    if (arrelemetno % 2 != 0)
    {
        // Odd number of elements
        median = a[arrelemetno / 2];
    }
    else
    {
        // Even number of elements
        median = (a[arrelemetno / 2] +
                  a[(arrelemetno / 2) - 1]) /
                 2.0;
    }

    printf("Median is: %.2f\n", median);

    return 0;
}

// code for mode for indivisual serise

#include <stdio.h>

int main()
{
    int arrelemetno;
    printf("Give how many values you want in array: ");
    scanf("%d", &arrelemetno);
    float a[arrelemetno]; // array me kitne element chiye vo input karne ke liye

    // array me kitte element chiye vo input karne ke liye loop
    for (int i = 0; i < arrelemetno; i++)
    {
        printf("Give  value ");
        scanf("%f", &a[i]);
    }
    int count[arrelemetno];               // same array banao jo count karega ki kitne element hai
    for (int i = 0; i < arrelemetno; i++) // assign karo 0 har place pe
    {
        count[i] = 0;
    }
    for (int i = 0; i < arrelemetno; i++) // loop count karega har value kitte bar aa rahe h
    {
        for (int j = 0; j < arrelemetno; j++)
        {
            if (a[i] == a[j])
                count[i]++;
        }
    }
    int maxCount = 0; // giving max couut max count ke value find  karenge
    for (int i = 0; i < arrelemetno; i++)
    {
        if (count[i] > maxCount)
            maxCount = count[i];
    }
    if (maxCount == 1)

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

// code for mode for indivisual serise

#include <stdio.h>

int main()
{
    int arrelemetno;
    printf("no of elemet in array want  ");
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

// discreate mean question

#include <stdio.h>
// mean discrreat
int main()
{
    int x[10], f[10];
    int n, sumF = 0, sumFX = 0;

    printf("How many values? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter frequency %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    printf("\nx\tf\tf*x\n");
    for (int i = 0; i < n; i++)
    {
        int fx = x[i] * f[i];
        printf("%d\t%d\t%d\n", x[i], f[i], fx);
        sumF = sumF + f[i];
        sumFX = sumFX + fx;
    }

    float mean = (float)sumFX / sumF;

    printf("\nMean = %.2f\n", mean);

    return 0;
}

// discreate median question

#include <stdio.h>
// discreate  median
int main()
{
    int x[10], n;

    printf("How many values? ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    // Sort the values (small to large) using simple bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    printf("\nSorted values: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    float median;

    if (n % 2 == 0)
    {
        // even number of values -> average of middle two
        median = (x[n / 2 - 1] + x[n / 2]) / 2.0;
    }
    else
    {
        // odd number of values -> middle one
        median = x[n / 2];
    }

    printf("\nMedian = %.2f\n", median);

    return 0;
}