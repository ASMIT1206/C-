/* Given two functions m and n, return yes if m is amangram(saare letters dono me common ho) of s */

/*input a string and return the number of times the neighbouring characters are different from each other*/ 

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter string s: ";
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n,j++;){
            if(s[i]==s[j])count++;
        }

    }
cout<<count;
    
 
  
    
}