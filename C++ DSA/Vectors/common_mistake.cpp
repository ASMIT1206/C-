#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(88);
    v[1]=99;
    cout<<v[1]<<endl<<endl;
    v.push_back(77);
    v.push_back(55);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;

 
    

}