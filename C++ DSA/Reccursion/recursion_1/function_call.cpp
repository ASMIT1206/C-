#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter a,b,c: ";
    cin>>a>>b>>c;

    pattern(a);
    pattern(b);
    pattern(c);
}