#include <stdio.h>
int main()
{
  int arr[10];

  for (int i = 0; i <= 9; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (int j = 0; j <= 9; j++)
  {
    if (j % 2 == 0)
    {
      arr[j] = 10 + arr[j];
    }
    else
    {
      arr[j] = 2 * arr[j];
    }
    printf(" %d: %d\n",j,arr[j]);
  }

  return 0;
}
