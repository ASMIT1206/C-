#include<iostream>
using namespace std;
void practice(int n){
int x=n%10;
while (n>9)
{
    n=n/10;
}

cout<<"LAST DIGIT: "<<x<<endl<<"FIRST DIGIT: "<<n;

}
  
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
practice(n);
}