#include<stdio.h>
#include<string.h>
int main(){
  char a[100];
   
    printf("Enter your string: ");
    // scanf("%[^\n]s",a);
    gets(a);

int i=0;
int size=0;
while(a[i]!='\0'){
    size++;
    i++;
}

for(int i=0,j=size-1;i<=j;i++,j--)
{
    char temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
puts(a);
    return 0;
}