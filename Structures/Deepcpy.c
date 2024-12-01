#include<stdio.h>
#include<string.h>

   typedef struct { 
    int attack;
    char name[20];
    int hp;
  
}pokemon;

int main(){
pokemon arr[4];

strcpy(arr[0].name,"Pikachu");
arr[0].attack=70;
arr[0].hp=80;

strcpy(arr[1].name,"Charizard");
arr[1].attack=95;
arr[1].hp=92;

strcpy(arr[2].name,"Blastoise");
arr[2].hp=arr[1].hp;
arr[2].attack=arr[1].attack;

arr[3]=arr[0];


for(int i=0;i<4;i++){
    printf("Name: %s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
    printf("HP: %d\n\n",arr[i].hp);
}



    return 0;
}