#include<stdio.h>
#include<string.h>

typedef struct { 
    int attack;
    char name[20];
    int hp;
}pokemon;

typedef struct legendary_pokemon{
pokemon normal;
char ability[20];
}legendary_pokemon;

typedef struct god_pokemon{
legendary_pokemon special;
int height;

}god_pokemon;

int main()
{
pokemon pikachu;
legendary_pokemon mewtwo;
god_pokemon arceus;

strcpy(pikachu.name,"Pikachu");
pikachu.attack=100;
pikachu.hp=85;

strcpy(mewtwo.normal.name,"Mewtwo");
mewtwo.normal.attack=300;
mewtwo.normal.hp=500;
strcpy(mewtwo.ability,"psychic");

arceus.special.normal.attack=1000;
arceus.special.normal.hp=1000;
strcpy(arceus.special.normal.name,"Arceus");
strcpy(arceus.special.ability,"Multitype");

printf("Name: %s\n",pikachu.name);
printf("Attack: %d\n",pikachu.attack);
printf("HP: %d\n",pikachu.hp);
printf("\n");

printf("Name: %s\n",mewtwo.normal.name);
printf("Attack: %d\n",mewtwo.normal.attack);
printf("HP: %d\n",mewtwo.normal.hp);
printf("Ability: %s\n",mewtwo.ability);
printf("\n");

printf("Name: %s\n",arceus.special.normal.name);
printf("Attack: %d\n",arceus.special.normal.attack);
printf("HP: %d\n",arceus.special.normal.hp);
printf("Ability: %s\n",arceus.special.normal.name);
printf("Special Attack: %s",arceus.special.ability);
printf("\n");


    return 0;
}









