#include <stdio.h>

int main()
{
    int n = 1234;
    int i = 0;
    int a;

    do
    {
        a = n / 10;
        n = a;
        i++;

    } while (a != 0);
    printf("%d", i);

    return 0;
}
