#include <stdio.h>

int main(){
    int jogadores[16];
    int pos1, pos7;

    printf("Digite os 16 jogadores: \n");

    for (int i = 0; i < 16; i++)
    {
        scanf("%d", &jogadores[i]);

        if (jogadores[i] == 1)
            pos1 = i + 1;

        if (jogadores[i] == 7)
            pos7 = i + 1;
    }

    // oitavas
    if ((pos1 - 1) / 2 == (pos7 - 1) / 2)
    {
        printf("oitavas\n");
    }
    // quartas -> grupos de 4 jogasores
    else if ((pos1 - 1) / 4 == (pos7 - 1) / 4)
    {
        printf("quartas\n");
    }
    // semifinal -> grupos de 8 jogadores
    else if ((pos1 - 1) / 8 == (pos7 - 1) / 8)
    {
        printf("semifinal\n");
    }
    else
    {
        printf("final\n");
    }
    return 0;
}