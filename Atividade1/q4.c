#include <stdio.h>
#include <math.h>
// Faça  um  programa  que,  recebendo  como  entrada  os  dados  de  dois  pontos  quaisquer  do  
// plano cartesiano P1(x1,y1) e P2(x2,y2), calcule e mostre a distância euclidiana entre eles,
// sendo esta calculada pela fórmula. 𝑑=2 𝑥1−𝑥2()2+𝑦1−𝑦2()2 
// - Dica: use a biblioteca math.h  
int main(){
    int x1, x2, y1, y2;
    float distanciaEntrePontos;
    printf("Digite o valor do X1: ");
    scanf("%i", &x1);
    printf("Digite o valor do Y1: ");
    scanf("%i", &y1);

    printf("Digite o valor do X2: ");
    scanf("%i", &x2);
    printf("Digite o valor do Y1: ");
    scanf("%i", &y2);
    // calculo da distancia
    distanciaEntrePontos = sqrt(pow(x1 - y1,2) + pow(y1 - y2,2));
    printf("-------------------------------\n");
    printf("A distancia entre os dois e: %.2f\n", distanciaEntrePontos);
    printf("-------------------------------\n");
    return 0;
}