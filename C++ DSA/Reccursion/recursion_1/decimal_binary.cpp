#include <iostream>
#include<math.h>
using namespace std;

int binary(int n){
    if(n==0)return 0;
    if(n%2==0)cout<<"0"<<" ";
    else cout<<"1"<<" ";
    binary(n/2);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout<<endl;
    binary(n);
  
}