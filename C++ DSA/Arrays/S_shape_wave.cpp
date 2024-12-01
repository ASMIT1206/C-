#include<iostream>
using namespace std;
int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int n=3;

for(int i=n-1;i>=0;i--){

if(i%2 !=0){
    for(int j=n-1;j>=0;j--){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
else
{
    for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
    cout<<endl;
}
}
  
}