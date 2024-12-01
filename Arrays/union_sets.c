#include <stdio.h>
int main()
{
    int a[5] = {1, 1, 5, 7, 9};
    int b[5] = {8, 6, 4, 2, 10};
    int c[10];
printf("Array A is: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Array B is: ");

    for (int i = 0; i < 5; i++)
        printf("%d ", b[i]);
    printf("\n");
    printf("Array C is: ");

    for (int i = 0; i <5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (a[i] != a[j])
            {
                c[i] = a[i];
            }
        }
    }

    for (int i = 0; i <5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (b[i] != b[j])
            {
                c[i + 5] = b[i];
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", c[i]);
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (c[j] > c[j + 1])
            {
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
   printf("Sorted Array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}