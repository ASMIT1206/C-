#include<stdio.h>
int main()
{
    int n,k,t;
    int sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
do
{
    k=n%10;
    t=k*k*k;
    sum=sum+t;
    n=n/10;
} while (n>0);

if (sum==m)
{
  printf("YES IT IS AN ARMSTRONG NUMBER");
}
else{
    printf("NO:IT IS NOT AN ARMSTRONG NUMBER");
}

}