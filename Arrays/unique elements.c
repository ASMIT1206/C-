#include<stdio.h>
#include<stdbool.h>
int main(){

    int arr[7]={4,1,4,5,100,100,6};

    for(int i=0;i<=6;i++)
    { bool flag=false;
        for(int j=i+1;j<=6;j++)
        {
            if(arr[i]==arr[j]) {flag=true;}

    }
      if(flag==false)
        {
            printf("%d ",arr[i]);
           
        }
      }
    return 0;
}