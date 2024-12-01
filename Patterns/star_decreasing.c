#include<stdio.h>
int main(){
int n;
printf("enter the no. of rows");
scanf("%d",&n);

int space=0;
int star=n;

for (int i = 1; i <=n; i++)
{ 
  for(int k=1;k<=space;k++)
  printf(" ");

  for(int j=1;j<=star;j++)
 printf("*");



printf("\n");
space++;
star--;

    }
   
  
    



   

return 0;}


