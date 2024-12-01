#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    int c[10];
int i=0;
int j=0;
int k=0;
    while(i<5)c[k++]=a[i++];
    while(j<5)c[k++]=b[j++];

    for(int i=0;i<10;i++)printf("%d ",c[i]);

    return 0;
}