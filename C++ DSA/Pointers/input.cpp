#include<iostream>
using namespace std;
int main(){
   int x,y;
   int* p=&x;
   int *q=&y;

   cout<<"Enter first no. and second no. : "<<endl;
   cin>>*p>>*q;
}