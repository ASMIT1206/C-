// no. of passes needed is n-1
// we select the min. no. in each pass and replace it by 1st number in unsorted part
// after each pass the beginning elements gets sorted and unsorted part reduces to 1

#include<limits.h>
#include <stdio.h>
#include<stdbool.h>

int main()
{int arr[7] = {7,4,5,9,8,2,1};
int n = 7;
for (int i = 0; i < n; i++)
{
        printf("%d ", arr[i]);
    }

// selection sort
for(int i=0;i<n-1;i++)
{ int min=INT_MAX;
int minindex=-1;
    for(int j=i;j<n;j++)
{// Selecting minimum
    if(arr[j]<min)
    {min=arr[j];
     minindex=j;
    }
}
//swaping the min elemnet and 1st element
int temp=arr[minindex];
arr[minindex]=arr[i];
arr[i]=temp;
}

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}