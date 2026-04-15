#include <stdio.h>

int main(){

    float b,t;
    float areaFrancisco, areaFrancisca;

    printf("Digite base menor (b): \n");
    scanf("%f", &b);

    printf("Digite base maior (t): \n");
    scanf("%f", &t);

    areaFrancisco = (b - t) * 3.5;
    areaFrancisca = 16*7 - areaFrancisco;

    if (areaFrancisco > areaFrancisca){
        printf("nota e do francisco");
    }else if (areaFrancisca > areaFrancisco){
        printf("a nota e da francisca");
    }else{
        printf("nota nao e de ninguem");
    }
}