#include <stdio.h>
int main () {
    int qtd, num;
    int soma = 0;
    int lista[200];
    int pos = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num == 0) {
            if (pos > 0) {
                pos -= 1;
                soma -= lista[pos];
            }else {
                printf("Nada pra remover\n");
            }
        } else {
            lista[pos] = num;
            soma += num;
            pos += 1;
        }
    }
    printf("Soma total: %d\n", soma);
}