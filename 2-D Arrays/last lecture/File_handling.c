#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    FILE* ptr=fopen("file.txt","r");
    char str[100];
    // if(fgets(str,100,ptr)!= NULL){
    //     printf("%s",str);
    // }

     while(fgets(str,100,ptr)!= NULL){
        printf("%s",str);
    }

    return 0; 
}

