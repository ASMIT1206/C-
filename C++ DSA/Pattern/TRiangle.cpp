#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j-1;
        }
        for(int t=1;t<i;t++){
            cout<<t;
        }
        cout<<endl;
    }
}