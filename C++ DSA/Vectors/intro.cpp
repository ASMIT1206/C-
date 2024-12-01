#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(4);
    v.push_back(8);
    cout<<v[0]<<endl;

    v[0]=88;
    cout<<v[0];

    

}