#include<stdio.h>
#include<string.h>

   typedef struct pokemon { 
    int attack;
    char name[20];
    int hp;
  
}pokemon;
   
int main(){

pokemon pikachu={100,"Pikachu",80};

printf("Attack: %d\n",pikachu.attack);
printf("Name: %s\n",pikachu.name);
printf("HP: %d\n",pikachu.hp);



    return 0;
}