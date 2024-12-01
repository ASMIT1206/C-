#include<stdio.h> 
int main()
{
int n;
  int sum=0;
printf("Enter the no: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    
   if(i!=0) {
    sum=sum+n%10;
    n=n/10;}
   
}

printf("The sum of digits %d",sum);

return 0;
}
