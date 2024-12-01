#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    float x=sqrt(64);
    float y=cbrt(8);
    int z=INT_MAX;
    int a=INT_MIN;
    int b=LONG_MAX;
    
    printf("Square root of 64 is: %f \n",x);
    printf("Cube root of 8 is: %f\n",y);
    printf("The maximun integer that can be stored in c language is: %d\n",z);
    printf("The minimum integer that can be stored in c language is: %d",a);
    // printf("The minimum integer that can be stored in c language using long is: %d",b);
}
