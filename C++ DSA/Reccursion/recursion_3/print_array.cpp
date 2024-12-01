#include<iostream>
using namespace std;

void display(int arr[],int x,int size){
    if(x==size) return;
    cout<<arr[x]<<" ";
    display(arr,x+1, size);
}

int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    int arr[n];
  
   for(int i=0;i<n;i++)
   {
    cout<<"Enter number "<<i+1<<": ";
    cin>>arr[i];
   }
   display(arr,0,n);

}