#include<iostream>
#include<strings.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    s.push_back('A');
    s.push_back('S');
    s.push_back('M');
    s.push_back('I');
    s.push_back('T');
    cout<<s<<endl;
    s.pop_back();
    cout<<s;

}