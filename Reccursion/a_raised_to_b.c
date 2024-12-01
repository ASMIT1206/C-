#include <stdio.h>

int raised(int a,int b)
{
   if(b==0)return 1;
   int ans=a*raised(a,b-1);
   return ans;

}

int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    int b;
    printf("Enter its power ");
    scanf("%d", &b);
    int power = raised(a,b);
    printf("The raised of a is %d", power);
    return 0;
}