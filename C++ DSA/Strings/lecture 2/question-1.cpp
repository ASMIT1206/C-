/*input a string and return the number of times the neighbouring characters are different from each other*/ 

#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int count=0;
    
    for(int i=0;i<str.length();i+=1){
        if(i==0){
            if(str[i]!=str[i+1])
            count++;
            }

       else if(str[i]!=str[i-1]&&str[i]!=str[i+1])count++;

       else if(i==str.length()-1){
        if(str[i]!=str[i-1])
        count++;
        }

    }
    if(str.length()==1)cout<<"No Neighbours";
   else cout<<count;
}