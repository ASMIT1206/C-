#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-a;
            if(b>n) b=2*n-b;
            cout<<min(a,b);
            
            
        }
        cout<<endl;
    }
}







