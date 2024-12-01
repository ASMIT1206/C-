#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int max = INT_MIN;
    int times = 0 ;

    do
    {

        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > max)
        {
            max = n;
            times = 1;
        }
        else if (n == max)
        {
            times++;
        }

    } while (n != (-1));

    printf("The maximum number is %d", max);
    printf(" and frequency is %d", times);

    return 0;
}