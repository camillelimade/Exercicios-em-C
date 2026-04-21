#include <stdio.h>
int main () {
    int somando, somaTotal;
    for (int i = 1; i <= 10; i++) {
        printf("--------------------------------------------------\n");
        printf("Digite um %i para agregar a soma: ", i);
        scanf("%i", &somando);
        somaTotal = somaTotal + somando;
    }
    printf("Somando total: %i\n", somaTotal);
    printf("Media aritmetica: %.2i\n", somaTotal / 10);
}
