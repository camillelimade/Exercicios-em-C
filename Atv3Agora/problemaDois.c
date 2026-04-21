#include <stdio.h>

int main() {
    char codigoUsuario;
    int pTotal = 0;
    int vTotal = 0;
    int valor = 0;
    int totalGeral = 0;
    float prestacao;
    for (int i = 1; i <= 15;) {
        printf("\nDigite o codigo de transacao (V ou P)\n");
        scanf(" %c", &codigoUsuario);
        if (codigoUsuario == 'V' || codigoUsuario == 'v' ||
            codigoUsuario == 'P' || codigoUsuario == 'p') {
            printf("Digite o valor da transacao %i:\n", i);
            scanf("%i", &valor);

            if (codigoUsuario == 'V' || codigoUsuario == 'v') {
                vTotal += valor;
            } else {
                pTotal += valor;
            }
            totalGeral += valor;
            i++;
        } else {
            printf("Erro: Tente novamente!");
        }
    }
    prestacao = (float)pTotal / 3;
    printf("Esse e o valor das compras a vista: %i\n", vTotal);
    printf("Esse e o valor das compras a prazo: %i\n", pTotal);
    printf("Valor total de todas as compras: %i\n", totalGeral);
    printf("Valor da primeira prestacao (3x sem juros): %.2f\n", prestacao);
}
