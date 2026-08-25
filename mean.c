// question no 1     mean
#include <stdio.h>

int main()
{
    float a[] = {};
    int arrelemetno;
    float sum;
    printf("give how many value you want in array ");
    scanf("%d", &arrelemetno);

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