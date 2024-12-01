#include<stdio.h>
#include<string.h>

   typedef struct pokemon { 
    int attack;
    char name[20];
    int speed;
    int hp;
  
}pokemon;

void change(pokemon* p){
    p->attack=1999;
p->speed=1220;
p->hp=1040;
return;
}

int main(){

pokemon pikachu;
pikachu.attack=199;
pikachu.speed=120;
pikachu.hp=100;
strcpy(pikachu.name,"Pikachu");

printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%d\n",pikachu.hp);
 change(&pikachu);

printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
printf("%d\n",pikachu.hp);


    return 0;
}