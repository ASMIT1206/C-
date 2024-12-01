#include<iostream>
using namespace std ;

void chapo(int x,int n){
   if(n<x)return;
    cout<<x<<" ";
   chapo(x+1,n);
  
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    chapo(1,n);
}