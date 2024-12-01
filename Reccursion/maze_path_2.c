#include <stdio.h>
int mazepath(int m,int n){
    if(n==1||m==1)return 1;
    return mazepath(m-1,n)+mazepath(m,n-1);
}
int main()
{
    int m, n;
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);
    printf("%d",mazepath(m,n));
    return 0;
}