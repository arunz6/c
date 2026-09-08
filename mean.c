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

    printf("How many values ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter frequency %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    printf("  x   f   f*x\n");
    for (int i = 0; i < n; i++)
    {
        int fx = x[i] * f[i];
        printf("%d  %d  %d   ", x[i], f[i], fx);
        sumF = sumF + f[i];
        sumFX = sumFX + fx;
    }

    float mean = (float)sumFX / sumF;

    printf("\nMean = %.2f\n", mean);

    return 0;
}

// discreate median question

#include <stdio.h>

int main()
{
    int x[10], f[10], cf[10];
    int n, sumF = 0;

    printf("How many  values");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter frequency %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sumF = sumF + f[i];
        cf[i] = sumF;
    }
    printf("x  f  cf\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d    %d   %d\n", x[i], f[i], cf[i]);
    }
    printf("\nTotal frequency (N) = %d\n", sumF);
    float medianPos = (sumF + 1) / 2.0;
    int median = 0;

    for (int i = 0; i < n; i++)
    {
        if (cf[i] >= medianPos)
        {
            median = x[i];
            break;
        }
    }
    printf("Median position = (N+1)/2 = %.1f\n", medianPos);
    printf("Median = %d\n", median);

    return 0;
}

// discrete mode

#include <stdio.h>

int main()
{
    int x[10], f[10];
    int n;

    printf("give  distinct values ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &x[i]);
        printf("Enter frequency %d: ", i + 1);
        scanf("%d", &f[i]);
    }

    printf("\nx\tf\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", x[i], f[i]);
    }

    int maxF = f[0];
    int mode = x[0];

    for (int i = 1; i < n; i++)
    {
        if (f[i] > maxF)
        {
            maxF = f[i];
            mode = x[i];
        }
    }

    printf("\nHighest frequency = %d\n", maxF);
    printf("Mode = %d\n", mode);

    return 0;
}

//  continious ke leye start karna h

// continious mean

#include <stdio.h>

int main()
{
    int n;
    float lower[10], upper[10], f[10], mid[10], fx[10];
    float sumF = 0, sumFX = 0;

    printf("how many class intervals ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nClass interval %d\n", i + 1);
        printf("give lower limit: ");
        scanf("%f", &lower[i]);
        printf("enter upper limit: ");
        scanf("%f", &upper[i]);
        printf("enter  frequency: ");
        scanf("%f", &f[i]);

        mid[i] = (lower[i] + upper[i]) / 2; // midpoint of class
        fx[i] = mid[i] * f[i];

        sumF = sumF + f[i];
        sumFX = sumFX + fx[i];
    }

    // Print table
    printf("\nClass  f  x (mid) f*x\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.0f-%.0f\t\t%.0f\t%.1f\t%.1f\n", lower[i], upper[i], f[i], mid[i], fx[i]);
    }

    float mean = sumFX / sumF;

    printf("\nTotal f  (N)  = %.0f\n", sumF);
    printf("Total f*x     = %.1f\n", sumFX);
    printf("Mean =%2f\n", mean);

    return 0;
}