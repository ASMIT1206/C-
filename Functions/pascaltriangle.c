#include <stdio.h>

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));

    return ncr;
}

int main()
{
    int n;
    printf("Enter n ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<=n-i;k++) printf(" ");
        for(int j=0;j<=i;j++)
        {
            int  tri=ncr(i,j);
            printf("%d ",tri);
                }
                printf("\n");
    }
    
    return 0;
}


