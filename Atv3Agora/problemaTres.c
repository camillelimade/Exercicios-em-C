#include <stdio.h>

int main() {
    // problema 3 da nova atividade
    int anos = 0;
    float chico = 1.50;
    float ze = 1.10;

    while (ze < chico) {
        chico += 0.02;
        ze += 0.07;
        anos++;
    }
    printf("Altura chico %.2f \n ", chico);
    printf("Altura ze %.2f \n ", ze);
    printf("Demorou %i anos \n ", anos);

}