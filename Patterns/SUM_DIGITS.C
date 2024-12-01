#include<stdio.h>
int main(){
    int num,sum=0,fact=1;

    printf("enter the number ");
    scanf("%d",&num);

for (int i = 1; num!=0; i++)
{
  sum=sum+num%10;
fact=fact*i;
  num=num/10;




}
printf("The sum of digits is %d \n",sum);

printf("%d",fact);

return 0;

}