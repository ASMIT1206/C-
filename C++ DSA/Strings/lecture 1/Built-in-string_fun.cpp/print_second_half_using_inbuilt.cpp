
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="ASMIT";
    cout<<"Enter string: ";
    getline(cin,s);
    int n=s.length();
    cout<<s.substr(0,n/2);
}