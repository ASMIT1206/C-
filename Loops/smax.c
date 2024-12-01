#include<stdio.h>
int main(){
    int arr[3];
    
   int max=0;
   int smax=0;

    for(int i=0;i<3;i++){
scanf("%d",&arr[i]);
        if(arr[i]>max){smax=max;max=arr[i];}
        else if(arr[i]>smax)smax=arr[i];

    }
    printf("\n%d\n",max);
    printf("%d\n",smax);


    return 0;
}