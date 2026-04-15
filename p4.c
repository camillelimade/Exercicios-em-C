#include <stdio.h>

int main()
{
    int d;
    printf("qual e a distância em centímetros?");
    scanf("%i", &d);
    
    if(d <= 800){
        printf("1 ponto");
    }
    if(d > 800 && d <= 1400){
        printf("2 pontos");
    }
    if(d > 1400 && d <= 2000){
        printf("3 potos");
    };
    return 0;
}