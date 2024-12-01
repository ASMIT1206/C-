#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    int p = (r * c) / 2;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        { scanf("%d", &arr[i][j]);}
    }

    int count = 0;
    for (int i = 0; i < r; i++)
    {for (int j = 0; j < c; j++)
        {if (arr[i][j] == 0)count++;}

    }
    if (count > p)
        printf("Sparse Matrix");
    else
        printf("Not a sparse matrix");
    return 0;
}