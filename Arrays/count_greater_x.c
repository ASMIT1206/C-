#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=1;
    int term=0;
    for(int i=0;i<=9;i++)
    { if(arr[i]>x) {printf("%d ",arr[i]);term+=1;}
      else continue;
    }
    printf("\nNo of terms is %d",term);
    return 0;}
    