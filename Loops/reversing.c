#include<stdio.h>
int main(){
    int n;

    printf("enter the number of terms: ");
    scanf("%d",&n);

do
{int t=n%10;
    printf("%d",t);
    n=n/10;
    
} while (n>0);


return 0;}