#include<iostream>
using namespace std;
int main(){

   // input string of size n and update all even index with 'a'

   char s[1000];
   puts("Enter string: ");
   gets(s);
   int size=sizeof(s)/sizeof(s[0]);
   for(int i=0;i<size;i++){
    if(i%2==0)s[i]='a';
   }
   puts(s);

}