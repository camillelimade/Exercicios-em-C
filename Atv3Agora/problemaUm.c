#include <stdio.h>
int main() {
    float preco = 5.0;
    int ingressos = 120;
    while (preco >= 1.0) {
        float lucro = (preco * ingressos) - 200;
        printf("Preco: R$ %.2f \n ", preco);
        printf("Ingressos vendidos: %d\n", ingressos);
        printf("Lucro: R$ %.2f \n ", lucro);
        preco -= 0.50;
        ingressos += 26;
    }
}