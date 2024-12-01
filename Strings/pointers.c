#include<stdio.h>
int main(){
    char g[]="Hello world";
    char* ptr=&g[0];
    printf("%p\n",ptr);
    printf("%p\n",&g);
    printf("%p\n",g);
    return 0;
}