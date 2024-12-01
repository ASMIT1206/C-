// either 2 steps or 3 steps or 1 step at a time
#include <stdio.h>

int stairs(int n)
{
if(n==1||n==2||n==3) return n;
    return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("%d", stairs(n));

    return 0;
}