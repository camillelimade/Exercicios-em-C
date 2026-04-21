#include <stdio.h>

int main() {
    // Variáveis para o primeiro retângulo
    float x0_1, y0_1, x1_1, y1_1;

    // Variáveis para o segundo retângulo
    float x0_2, y0_2, x1_2, y1_2;

    // Leitura dos dados do primeiro retângulo
    printf("Digite as coordenadas do primeiro retângulo:\n");
    printf("Canto inferior esquerdo (x0 y0): ");
    scanf("%f %f", &x0_1, &y0_1);
    printf("Canto superior direito (x1 y1): ");
    scanf("%f %f", &x1_1, &y1_1);

    // Leitura dos dados do segundo retângulo
    printf("\nDigite as coordenadas do segundo retângulo:\n");
    printf("Canto inferior esquerdo (x0 y0): ");
    scanf("%f %f", &x0_2, &y0_2);
    printf("Canto superior direito (x1 y1): ");
    scanf("%f %f", &x1_2, &y1_2);

    if (x1_1 < x0_2 ||  // Retângulo 1 está à esquerda do Retângulo 2
        x1_2 < x0_1 ||  // Retângulo 2 está à esquerda do Retângulo 1
        y1_1 < y0_2 ||  // Retângulo 1 está abaixo do Retângulo 2
        y1_2 < y0_1) {  // Retângulo 2 está abaixo do Retângulo 1

        printf("\nOs retângulos NÃO se interceptam.\n");
        } else {
            printf("\nOs retângulos SE INTERCEPTAM!\n");
        }

    return 0;
}