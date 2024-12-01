#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of triangle\n");
printf("Enter the 1st side ");
scanf("%d",a);
 printf("Enter the 2nd side ");
scanf("%d",b);
 printf("Enter the 3rd side ");
scanf("%d",c);
   
   if(a+b>c||a+c>b)
return 0;    
}
