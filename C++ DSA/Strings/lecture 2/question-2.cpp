/* Given two functions m and n, return yes if m is amangram(saare letters dono me common ho) of s */

/*input a string and return the number of times the neighbouring characters are different from each other*/ 

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    string t;
    cout<<"Enter string s: ";
    getline(cin,s);
    cout<<"Enter string t: ";
    getline(cin,t);
 
  sort(t.begin(),t.end());
  sort(s.begin(),s.end());

   if(s==t)cout<<"YES";
   else cout<<"NO";

    
}