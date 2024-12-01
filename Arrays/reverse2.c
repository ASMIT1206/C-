#include <stdio.h>
int main()
{

    int arr[10];

    for (int i = 0; i <= 9; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter index number about which you want to rotate: ");
    scanf("%d", &k);

    for (int i = 0, j = 9; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0, j = k - 1; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = k, j = 9; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}