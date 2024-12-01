#include<iostream>
using namespace std;
int main(){
int x=5;
int* p=&x;
cout<<p<<endl;
cout<<*p<<endl;
p=p+1;
cout<<p<<endl;
cout<<"Garbage Value: "<<*p<<endl;  /*-------->garbage value*/
p=p-1;
cout<<*p<<endl;
cout<<p<<endl;
*p+=1;
cout<<*p;
}