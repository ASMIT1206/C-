#include<stdio.h>
#include<string.h>
int main()
{  char str[100];
printf("Enter the line: ");
scanf("%s[^\n]",str);
// scanf("%[^\n]s",str);
// printf("Your input is: %s",str); 
puts(str);
return 0; }