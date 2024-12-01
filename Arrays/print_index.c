// take 10  input from user and if input is less than 35 print number and corresponding index num. using array 



#include <stdio.h>
int main()
{
    int arr[10] ;
for(int i=0;i<=9;i++)
{
    printf("Enter the number %d: ",i+1);
    scanf("%d",&arr[i]);
}

printf("\n");

    {
        for (int i = 0; i <= 9; i++)
            if (arr[i] < 35){
                 printf("%d-%d\n",i+1,arr[i]);
    }

}}