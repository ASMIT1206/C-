#include<stdio.h>
int fact(int n){ int temp=1;
    for(int i=1;i<=n;i++)
    { temp=temp*i;
}
return temp;
}
int main()
{
int n;
printf("Enter a number ");
scanf("%d",&n);
fact(n);
printf("%d",fact);
return 0;

}