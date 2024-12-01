#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter thr value of n: ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        cout<<"\n";
        nsp--;
        nst+=2;
    }
}
