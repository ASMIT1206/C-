#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){cout<<" ";}
        for(int j=1;j<=i;j++){cout<<j;}
        for(int p=1;p<=i-1;p++){cout<<p;}
        cout<<endl;
    }

}