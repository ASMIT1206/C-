#include <stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 1;
    int even = 0;
    int odd = 0;
    for (int i = 0; i <=6; i++)
    {
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }
    printf("Sum of odd indecies is %d\n", odd);
    printf("Sum of even indices is %d\n", even);
    printf("The difference between sum of odd indices and even indices is %d ",odd-even);
    return 0;
}