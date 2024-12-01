#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("%d", fibo(a));

    return 0;
}