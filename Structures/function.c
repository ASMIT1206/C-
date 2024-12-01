#include<stdio.h>
#include<string.h>

typedef struct pokemon { 
    int attack;
    char name[20];
    int hp;
}pokemon;

void fun(pokemon p){
    p.attack=120;
    printf("HP: %d\n",p.hp);
    
    return;
}

int main()
{
pokemon pikachu;
pikachu.hp=120;
pikachu.attack=80;
fun(pikachu);
printf("Attack: %d",pikachu.attack);

    return 0;
}









