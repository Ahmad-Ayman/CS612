#include <stdio.h>

struct Car {
    int speed;
    int hp;
} car[];

int main() {
    int totalSpeed = 0, totalHp = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter the speed of car #%d : ", i + 1);
        scanf("%d", &car[i].speed);
        totalSpeed += car[i].speed;
        printf("Enter the horse power of car #%d : ", i + 1);
        scanf("%d", &car[i].hp);
        totalHp += car[i].hp;
    }
    printf("The Average Speed is : %d\n", totalSpeed / 5);
    printf("The Average HP is : %d\n", totalHp / 5);
    int minSpeed = car[0].speed;
    int minHp = car[0].hp;
    int maxSpeed = car[0].speed;
    int maxHp = car[0].hp;
    for (int i = 0; i < 5; i++) {
        if (car[i].speed < minSpeed) {
            minSpeed = car[i].speed;
        }
        if (car[i].hp < minHp) {
            minHp = car[i].hp;
        }

        if (car[i].speed > maxSpeed) {
            maxSpeed = car[i].speed;
        }

        if (car[i].hp > maxHp) {
            maxHp = car[i].hp;
        }
    }

    printf("The Minimum Speed is : %d\n", minSpeed);
    printf("The Maximum Speed is : %d\n", maxSpeed);

    printf("The Minimum HP is : %d\n", minHp);
    printf("The Maximum HP is : %d\n", maxHp);
    return 0;
}