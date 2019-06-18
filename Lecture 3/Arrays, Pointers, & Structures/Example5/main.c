#include <stdio.h>
#include <stdlib.h>

 struct Car{
int hp;

int cc;
float weight;
}c1; /// if i put variable name after the curly braces of the struct and before the semicolon, it will be declared as the variable of type Car
int main()
{

struct Car c2; /// another way to declare a variable of type Car
    c2.hp = 1;

    c1.cc=100;
    c2.weight=50;

    printf("hp is : %d",c2.hp);


    return 0;
}
