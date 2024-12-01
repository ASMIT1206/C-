#include <iostream>
#include <limits.h>
using namespace std;

int minInArray(int arr[],int size,int idx){
    if(size==idx)return INT_MIN;
    return max(arr[idx],minInArray(arr,size,idx+1));

}

int main()
{
    int arr[5] = {1, 2, 4, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
   cout<<minInArray(arr,size,0);
   
}