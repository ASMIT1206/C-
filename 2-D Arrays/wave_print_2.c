#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter values of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("The wave form is :\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            

                printf("%d", arr[n - i][j]);
            
        }
        printf("\n");
    }

    return 0;
}
