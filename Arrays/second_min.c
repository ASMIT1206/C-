#include<stdio.h>
int main(){
int arr[5]={99,45,75,56,88};
int min=arr[0];
int smin=arr[0];
    
for(int i=0;i<5;i++)
{
if(arr[i]<min)min=arr[i];
    }
      printf("MINIMUN: %d\n",min);
 
for(int j=0;j<5;j++){
    if(arr[j]!=min && arr[j]<smin  ) smin=arr[j];
}

printf("SECOND MINIMUM: %d\n",smin);
    return 0;
}