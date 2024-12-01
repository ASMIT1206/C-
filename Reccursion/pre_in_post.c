#include <stdio.h>
void pip(int n)
{
    if (n == 0)return 1;
    printf("%d", n);
    pip(n - 1);
    printf("%d", n);
    pip(n - 1);
    printf("%d", n);
    return;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    pip(n);
    return 0;
}