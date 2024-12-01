#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value for n*n: ";
    cin>>n;
    int arr[n][n];
    cout<<"Start entering values: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Transpose of matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}