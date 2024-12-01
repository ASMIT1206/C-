#include <iostream>
#include <limits.h>
using namespace std;

void print_min(int arr[], int size, int index, int min)
{
    if (index == size)
    {
        cout << min;
        return;
    }
    if (min > arr[index])min = arr[index];
    
    print_min(arr, size, index + 1, min);
}

int main()
{
    int arr[5] = {1, 2, 4, 9, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    print_min(arr, size, 0,INT_MAX);
}