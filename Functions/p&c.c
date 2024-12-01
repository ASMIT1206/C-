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
    int n, r;
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter r");
    scanf("%d", &r);

    int ans = ncr(n, r);
    printf("%d", ans);
}
