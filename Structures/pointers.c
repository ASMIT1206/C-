#include<stdio.h>

typedef struct person{
    int age;
    int weight;
}person;

int main(){
person p1;

p1.age=23;
p1.weight=69;

person* x=&p1;

x->age=100;
x->weight=200;


printf("Age: %d years\n",p1.age);
printf("Weight: %d kg",p1.weight);

    return 0;
}