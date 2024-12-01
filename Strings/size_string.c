#include<stdio.h>
#include<string.h>
int main(){
    int str[100];

    printf("Enter The String: ");
    scanf("%[^\n]s",str);

    int i=0;
    int size=0;

    while(str[i]!='\0'){
        size++;
        i++;
    }

    printf("%d",size);
    
    return 0;
}
