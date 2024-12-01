#include<iostream>
using namespace std;
int main(){
    int x=122;
    int* p=&x;
    x=546;
    *p=120;

    cout<<*p; // P ke andar j address store hai us par konsi value store hai vo batao
}