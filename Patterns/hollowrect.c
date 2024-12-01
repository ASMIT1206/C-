#include<stdio.h>
int main()
{
int n,m,t;
printf("enter the no. of rows: ");
scanf("%d",&n);

printf("enter the no. of columns: ");
scanf("%d",&m);


for (int i=1; i<=n; i++)
{
    for (int j = 1; j <=n; j++)
    {
        if((i==1||i==n)||(j==1||j==n)){printf("*");}
        else{printf(" ");}
    }
    printf("\n");




   
}





    return 0;
}