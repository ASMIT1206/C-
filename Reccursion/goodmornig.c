#include<stdio.h>
void gm(int x){
if(x==0) return;
printf("GOOD MORNING\n");
gm(x-1);
 return;
}
int main(){
     int a;
    printf("Enter a number ");
    scanf("%d", &a);
    gm(a);
   

}