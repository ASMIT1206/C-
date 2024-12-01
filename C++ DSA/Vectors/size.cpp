#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int>v;
v.push_back(44);
cout<<endl<<v.capacity()<<" ";
cout<<v.size();

v.push_back(86);
cout<<endl<<v.capacity()<<" ";
cout<<v.size();

v.push_back(95);
cout<<endl<<v.capacity()<<" ";
cout<<v.size();

v.push_back(47);
cout<<endl<<v.capacity()<<" ";
cout<<v.size();


}