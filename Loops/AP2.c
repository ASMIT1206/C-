#include<stdio.h>
int main(){
    int n;

    printf("enter the number of terms: ");
    scanf("%d",&n);
    
    for (int i = 2; i<=3*n-1; i=i+3)
    {
       printf("%d ",i);
    }
    return 0;}