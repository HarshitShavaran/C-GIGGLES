#include <stdio.h>

int main(void)
{
    struct pokemon {
        int speed;
        int hp;
        int attack;
        char tier;
    } pikachu, charizard; 

    pikachu.attack = 25;
    pikachu.hp = 30;      
    pikachu.speed = 40;
    pikachu.tier = 'C';

    charizard.attack = 50;
    charizard.hp = 60;
    charizard.speed = 70;
    charizard.tier = 'B';

    printf("%c\n", charizard.tier);

    return 0;             
}                        
