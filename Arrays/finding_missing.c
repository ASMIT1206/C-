#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int sum2 = (10 * 11) / 2;

    for (int i = 0; i <= 8; i++)
    {
        sum = sum + arr[i];
    }

    printf("The missing value from 1 to 5 is %d", sum2 - sum);

    return 0;
}