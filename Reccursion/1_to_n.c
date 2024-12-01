#include<stdio.h>
int num(int x,int n){
    if(x>n)return 1;
     num(1,n-1); 
     printf("%d",n); 
   
}


int main(){
    int x=1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    num(1,n);
   
    return 0;
}