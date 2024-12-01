#include<stdio.h>
int main(){
FILE* ptr;
ptr=fopen("Intro.txt","w");
char str[100]="MY NAme IS Asmit YADAv";
fputs(str,ptr);
fclose(ptr);


    return 0;
}