#include<iostream>
using namespace std;
int pattern(int n){
    if(n==1)return 1;
    cout<<n;
    pattern(n-1);
    cout<<n;
    pattern(n-1);
    cout<<n;
    pattern(n-1);


}
int main(){
      int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<pattern(n);
}