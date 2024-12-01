#include<iostream>
#include<string.h>
using namespace std;
int Skip_a_Character(char s[],int size,int index){
if(size==index) return 0 ;
if(s[index]=='A'||s[index]=='a'){cout<<"_";}
else cout<<s[index];
Skip_a_Character(s,size,index+1);

}
int main(){
    char str[100];
    puts("Enter String:");
    gets(str);
    int size=strlen(str);
    Skip_a_Character(str,size,0);
    
}
