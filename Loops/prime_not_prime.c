#include<stdio.h> 
#include<math.h>
int main()
{
int n;
int  a=0;
int i;
printf("Enter the no: ");
scanf("%d",&n);

for( i=3;i<=n-1;i++){

if ( n%i==0){
    a=1;
  
}
 
}
if (a==1)printf("composite");
else {
    printf("prime");}
return 0;
}
