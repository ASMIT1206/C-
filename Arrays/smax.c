#include<stdio.h>
int main(){
    int n;
    printf("How many no. you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    
   int max=0;
   int smax=0;

    for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
        if(arr[i]>max){smax=max;max=arr[i];}
        else if(arr[i]>smax)smax=arr[i];

    }
    printf("\nMAX:%d\n",max);
    printf("SMAX:%d\n",smax);


    return 0;
}