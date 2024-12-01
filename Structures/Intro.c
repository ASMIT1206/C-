#include<stdio.h>
typedef int Integer;
typedef float Real_no;
typedef struct 
{
    int health;
    int attack;
    char name[20];
    char special_move[30];
}Pokemon;

int main(){
Integer x=5;
Real_no y=100.567;
printf("%d\n",x);
printf("%f",y);

Pokemon pikachu,charizard,greyninja,skeptile;

    return 0;
}