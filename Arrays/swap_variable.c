#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The new value of a is %d",a);
    printf("\nThe new value of b is %d",b);
    return 0;
}