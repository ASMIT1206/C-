#include<stdio.h>
int main(){
    int a,b;
    int temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

temp=a;
a=b;
b=temp;
printf("The value of a is %d\n",a);
printf("The value of b is %d",b);


}