#include <stdio.h>

int main() {
// criar variaveis
    float custoDeFab, percentualLucro, precoDeVenda;
    printf("Digite o valor do custo da fabrica: ");
    scanf("%f", &custoDeFab);
    printf("Digite o percentual de lucro: ");
    scanf("%f", &percentualLucro);
    precoDeVenda = custoDeFab * percentualLucro;
    printf("Esse e o preco de venda desse carro: ");
    printf("%.2f", precoDeVenda);
}