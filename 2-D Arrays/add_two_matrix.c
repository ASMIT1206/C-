#include<stdio.h>
int main()
{
int a[2][2]={10,20,30,40};
int b[2][2]={5,6,7,8};
int c[2][2];

for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}

for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("%d ",c[i][j]);
        
    }
    printf("\n");
}


    return 0;
}