#include<iostream>
using namespace std ;

void chapo(int n){
    if(n==0)return ;
    cout<<n<<" ";
    chapo(n-1);
    cout<<n<<"  ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    chapo(n);
}