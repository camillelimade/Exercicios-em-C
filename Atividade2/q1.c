#include <stdio.h>

int main(){
    float B, T;
    float ladoEsquerdo, ladoDireito;
    printf("-------------------------------\n");
    printf("Digite o comprimento de B: ");
    scanf("%f", &B);
    
    printf("-------------------------------\n");
    printf("Digite o comprimento de T: ");
    scanf("%f", &T);
    // o calculo da area é a multiplicação das medidas do retangulo
    ladoEsquerdo = (B + T) * 70 /2;
    ladoDireito = (160 * 70) - ladoEsquerdo;

    if (ladoEsquerdo > ladoDireito){
        printf("-------------------------------\n");
        printf("Francisco (Lado Esquerdo maior) \n");
        printf("-------------------------------\n");
    }else if(ladoEsquerdo == ladoDireito){
        printf("-------------------------------\n");
        printf("As areas sao iguais \n");
        printf("-------------------------------\n");
    }else{
        printf("-------------------------------\n");
        printf("Francisca (Lado Direito maior) \n");
        printf("-------------------------------\n");
    }
    
}