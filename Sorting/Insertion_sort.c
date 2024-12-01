#include<stdio.h>
int main(){
    int arr[5]={1,50,32,44,296};
    int n=5;


for(int i=0;i<n;i++)
{
    int j=i;
    while (arr[j-1]>arr[j])
    {
       int temp=arr[j-1];
       arr[j-1]=arr[j];
       arr[j]=temp;
       j--;
    }
    
}
for(int i=0;i<n;i++){
    printf("%d_",arr[i]);
}

return 0;}