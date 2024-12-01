#include <stdio.h>

int powerlog(int a, int b)
{
    if (b == 0)
        return 1;
    int t = powerlog(a, b / 2) ;
    if (b % 2 == 0)
        return t*t;
    else
        return t*t*a;
}

int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    int b;
    printf("Enter its power ");
    scanf("%d", &b);
    int power = powerlog(a, b);
    printf("%d", power);
    return 0;
}