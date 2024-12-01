#include <stdio.h>
int main()
{
  int m, n, p, q;
  printf("Enter no. of rows for 1st matrix: ");
  scanf("%d", &m);
  printf("Enter no. of columns for 1st matrix: ");
  scanf("%d", &n);
  printf("Enter no. of rows for 2nd matrix: ");
  scanf("%d", &p);
  printf("Enter no. of columns for 2nd matrix: ");
  scanf("%d", &q);
  int a[m][n];
  int b[p][q];
  int c[m][q];

  if (n != p){
    printf("Cannot be multiplied");
    return 0;}
  printf("Enter elements of 1st matrix:\n");

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {

      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter elements of 2nd matrix:\n");
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {

      scanf("%d",&b[i][j]);
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      c[i][j] = 0;
      for (int k = 0; k < n; k++)
      {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}