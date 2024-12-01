#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};


    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;


    int* ptr=arr;
    // int *ptr=&arr[0];

    cout<<ptr[4]<<endl;
    ptr[4]=100;
    cout<<ptr[4]<<endl;
    cout<<*ptr<<endl;
    cout<<ptr;
}