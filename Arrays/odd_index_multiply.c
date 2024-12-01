#include <stdio.h>
int main()
{
   int arr[10];
   for (int i = 0; i <= 9; i++)
   {
      printf("Enter number %d: ", i + 1);
      scanf("%d", &arr[i]);
   }
   int product = 1;
   for (int j = 1; j <= 10; j += 2)
   {
      product = product * arr[j];
   }
   printf("%d", product);

   return 0;
}