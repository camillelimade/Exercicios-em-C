#include <stdio.h>
int main()
{
    int valor, parcelas;
    printf("insira o valor a ser pago:");
    scanf("%d", &valor);
    printf("insira a quantidade de parcelas:");
    scanf("%d", &parcelas);
    int base = valor / parcelas;
    int resto = valor % parcelas;
    
    for (int i = 0; i < parcelas; i++) {
        if (i < resto) {
            printf("%d ", base + 1);
        } else {
            printf("%d ", base);
        }
    }

}