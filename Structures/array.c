#include<stdio.h>
#include<string.h>

   typedef struct pokemon { 
    int attack;
    char name[20];
    int hp;
  
}pokemon;

int main(){
pokemon arr[2];

strcpy(arr[0].name,"Pikachu");
arr[0].attack=70;
arr[0].hp=80;

strcpy(arr[1].name,"Charizard");
arr[1].attack=95;
arr[1].hp=92;

for(int i=0;i<2;i++){
    printf("Name: %s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
    printf("HP: %d\n",arr[i].hp);
}



    return 0;
}