#include<stdio.h>
int main(){
    char str[100];
    puts("Enter string: ");
    gets(str);
    int x,y;
    puts("Input the position to start extraction: ");
    scanf("%d",&x);
    puts("Input the length of substring: ");
    scanf("%d",&y);
    
    char substr[100];
int t=0;
    for(int i=x;x<=y;i++){
        substr[t++]=str[x];
        x++;
    }
    substr[t]='\0';
    printf("Extracted substring: %s",substr);


    return 0;
}