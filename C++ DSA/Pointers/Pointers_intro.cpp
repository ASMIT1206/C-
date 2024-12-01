#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* p =&x;
    
    cout<<sizeof(int*)<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
}