#include <stdio.h>

int main() {
    int v[16];
    int i;
    int posZhao, posLiu;

    for (i = 0; i < 16; i++) {
        printf("insira a posição (entre 1 e 16):");
        scanf("%d", &v[i]);

        if (v[i] == 1)
            posZhao = i + 1; 
        if (v[i] == 7)
            posLiu = i + 1;
    }
    int rodada = 0;
    while (posZhao != posLiu) {
        posZhao = (posZhao + 1) / 2;
        posLiu = (posLiu + 1) / 2;
        rodada++;
    }
    switch (rodada) {
        case 1:
            printf("oitavas");
            break;
        case 2:
            printf("quartas");
            break;
        case 3:
            printf("semifinal");
            break;
        case 4:
            printf("final");
            break;
    }

    return 0;
}