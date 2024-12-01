#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 2, 4, 2, 5, 2};
    int count=0,term=1,x;

    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            { count=1;
            term++;
            x=arr[i];
            break;
            }
        }
    }
    if(count==1)
    {
        printf(" %d times,the repeated number is %d",term,x);
    }

    return 0;
}