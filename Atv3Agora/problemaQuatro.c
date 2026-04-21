#include <stdio.h>

int main() {
    // variaveis de salario
    float salarioMaria, salarioJoao;
    float poupancaMaria, poupancaJoao;
    int meses = 0;
    printf("Digite o salario de Maria: ");
    scanf("%f", &salarioMaria);

    salarioJoao = salarioMaria / 3;

    poupancaMaria = salarioMaria;
    poupancaJoao = salarioJoao;

    while (poupancaJoao < poupancaMaria) {
        poupancaMaria += poupancaMaria * 0.01;
        poupancaJoao += poupancaJoao * 0.03;
        meses++;
        printf("Mes %d -> Maria: %.2f | Joao: %.2f\n", meses, poupancaMaria, poupancaJoao);
    }
    printf("Qauntidade de meses: %d\n", meses);

}
