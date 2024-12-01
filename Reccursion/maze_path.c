#include <stdio.h>
 int mazepath(int cr,int cc,int er,int ec)
{int rightways=0;
int downways =0;
if(cr==er && cc==ec) return 1;
if(cr==er)rightways+=mazepath(cr,cc+1,er,ec);
if(cc==ec)downways+=mazepath(cr+1,cc,er,ec);
if(cr<er && cc<ec){
    downways+=mazepath(cr+1,cc,er,ec);
    rightways+=mazepath(cr,cc+1,er,ec);
}
int totalways=rightways+downways;

}

int main()
{
    int m, n;
    printf("Enter no. of rows: ");
    scanf("%d", &m);
    printf("Enter no. of columns: ");
    scanf("%d", &n);
  int x= mazepath(1,1,m,n);
  printf("%d",x);
    return 0;
}