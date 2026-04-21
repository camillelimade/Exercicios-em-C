#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digiet o comprimento do primeiro lado: ");
    scanf("%d", &a);
    printf("Digiet o comprimento do segundo lado: ");
    scanf("%d", &b);
    printf("Digiet o comprimento do terceiro lado: ");
    scanf("%d", &c);
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("\n Os lados nao formam um triangulo ");
    }
    printf("\n Os lados formam um triangulo \n");
    if (a == b && b == c) {
        printf("O triangulo e equilatero");
    }else if (a != b && a != c && b != c) {
        printf("O triangulo e escaleno \n");
    }else {
        printf("O triangulo e isosceles\n");
    }
}