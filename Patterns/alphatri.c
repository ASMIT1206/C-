#include<stdio.h>
int main(){
int n;
printf("enter the no. of rows");
scanf("%d",&n);

for (int i = 1; i <=n; i++)
{ int a=1;
   for ( int j = 1; j <=i; j++)
   {char d=a+64;

    printf("%c",d);
    
   }
 printf("\n");  
}








return 0;
}