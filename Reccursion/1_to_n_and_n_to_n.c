#include<stdio.h>
int num(int n){
    if(n==0)return 1;
     num(n-1);
     printf("%d ",n);  
}
int tum(int n){
    if(n==0)return 1;
     printf("%d ",n);  
      tum(n-1);

}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    num(n);
    printf("\n");
    tum(n);
    return 0;
}
