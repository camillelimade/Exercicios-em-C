#include <stdio.h>

int main () {
    printf("Digite um numero: ");
    int n;
    float h;
    scanf("%i", &n);
    if (n != 0) {
        for (n; n > 0; n++) {
            h = h + (1/n);
        }
    }
}