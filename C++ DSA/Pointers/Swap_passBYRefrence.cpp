#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b;
}