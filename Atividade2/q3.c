#include <stdio.h>

int main(){
    int h, p, f, d;
    int distanciaFugitivo, distanciaPolicial;

    printf("-------------------------------\n");
    printf("Digite onde o helicoptero esta: ");
    scanf("%d", &h);

    printf("-------------------------------\n");
    printf("Digite onde esta o policial: ");
    scanf("%d", &p);

    printf("-------------------------------\n");
    printf("Digite onde esta o fugitivo: ");
    scanf("%d", &f);

    printf("-------------------------------\n");
    printf("Digite a direcao (-1 horario, 1 anti-horario): ");
    scanf("%d", &d);
    printf("-------------------------------\n");
    if (d == 1)
    {
        distanciaFugitivo = (h - f + 16) % 16;
        distanciaPolicial = (p - f + 16) % 16;
    }
    else
    {
        distanciaFugitivo = (f - h + 16) % 16;
        distanciaPolicial = (f - p + 16) % 16;
    }

    if (distanciaPolicial <= distanciaFugitivo)
    {
        printf("N\n");
    }
    else
    {
        printf("S\n");
    }
    return 0;
}