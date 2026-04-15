#include <stdio.h>
/*
Determinar a pontuação de um lançamento em um jogo, com base na distância até a cesta.

Regras:
- D ≤ 800 → 1 ponto
- 800 < D ≤ 1400 → 2 pontos
- 1400 < D ≤ 2000 → 3 pontos

O programa deve retornar a pontuação correspondente.
*/
int main(){
    int distancia;
    printf("Digite a distancia: (Em centimetros)\n");
    scanf("%i", &distancia);
    if (distancia <= 800)
    {
        printf("1 Ponto\n");
    }else if (distancia > 800 && distancia <= 1400)
    {
        printf("2 Pontos\n");      
    }else if (distancia > 1400 && distancia <= 2000)
    {
        printf("3 Pontos\n");
    }else
    {
        printf("Distancia invalida\n");
    }
    return 0;
}