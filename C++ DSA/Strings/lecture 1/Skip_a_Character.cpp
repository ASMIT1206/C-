#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    gets(s);
    cout<<s<<endl;
    int size=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<size;i++){
        if(s[i]=='A'||s[i]=='a')cout<<"_";
        else cout<<s[i];
    }
}
