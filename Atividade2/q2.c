#include <stdio.h>

int main(){
    int valorCompra;
    int parcelas;
    // recebe valor da compra
    printf("Digite o valor da compra: \n");
    scanf("%d", &valorCompra);
    // recebe quantidade de parcelas
    printf("Digite o numero de parcelas (Ate 18 vezes): \n");
    scanf("%d", &parcelas);
    // cria novas variaveis pra facilitar manipulação e comparações condicionais
    int valorBase = valorCompra / parcelas;
    int resto = valorCompra % parcelas; 
    // roda enquanto houverem parcelas
    for (int i = 0; i < parcelas; i++)
    {
        if (i < resto)
        {
            printf("Parcela %d: %d\n", i,  valorBase + 1);
        }
        else
        {
            printf("Parcela %d: %d\n", i, valorBase);
        }
    }
    return 0;
}