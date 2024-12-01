#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7};
    int max = INT_MIN; 
    int smax = INT_MIN;

    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax)smax=arr[i];
    }
    printf("%d", smax);
    return 0;
}
