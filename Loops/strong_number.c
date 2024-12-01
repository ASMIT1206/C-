#include<stdio.h>
int main()
{
    int n;
    int k;
    int fact=1;
    int sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
int m=n;

do{
k=n%10;
fact=1;
for(int i=1;i<=k;i++)
{fact=fact*i;}
sum=sum+fact;
n=n/10;

}while(n>0);

if(sum==m)printf("strong no.");
else printf("not a strong no.");









    return 0;
}