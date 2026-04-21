#include <stdbool.h>
#include <stdio.h>

int main() {
    int voto;
    int votoUm = 0, votoDois = 0, votoTres = 0, votoQuatro = 0;
    int votoNulo = 0, votoBranco = 0;

    bool rodando = true;
    while (rodando) {
        printf("Menu de votos: \n");
        printf("Digite 5 para Voto Nulo \n");
        printf("Digite 6 para Voto em Branco \n");
        printf("Digite 1, 2, 3, e 4 para os demais candidatos\n");
        printf("Digite 0 para sair do programa\n");
        printf("------------------------------\n");
        printf("Digite seu voto: \n");

        scanf("%d", &voto);
        switch (voto) {
            case 1:
                printf("Voto 1 registrado com sucesso\n");
                votoUm++;
                break;
            case 2:
                printf("Voto 2 registrado com sucesso\n");
                votoDois++;
                break;
            case 3:
                printf("Voto 3 registrado com sucesso\n");
                votoTres++;
                break;
            case 4:
                printf("Voto 4 registrado com sucesso\n");
                votoQuatro++;
                break;
            case 5:
                printf("Voto nulo registrado para fins de pesquisa\n");
                votoNulo++;
                break;
            case 6:
                printf("Voto em branco registrado para fins de pesquisa\n");
                votoBranco++;
                break;
            case 0:
                rodando = false;
                break;
            default:
                printf("Codigo invalido: Tente novamente\n");
        }
    }

    int geral = (votoUm + votoDois + votoTres + votoQuatro + votoNulo + votoBranco);

    printf("Exibindo quantidade de votos por candidato: \n");
    // 1
    printf("Candidato 1: %i\n", votoUm);
    float porcUm = 0;
    porcUm = ((float)votoUm / geral) * 100;
    printf("Porcentagem: %.2f%%\n", porcUm);
    // 2
    printf("Candidato 2: %i\n", votoDois);
    float porcDois = 0;
    porcDois = ((float)votoDois / geral) * 100;
    printf("Porcentagem: %.2f%%\n", porcDois);
    // 3
    printf("Candidato 3: %i\n", votoTres);
    float porcTres = 0;
    porcTres = ((float)votoTres / geral) * 100;
    printf("Porcentagem: %.2f%%\n", porcTres);
    // 4
    printf("Candidato 4: %i\n", votoQuatro);
    float porcQuatro = 0;
    porcQuatro = ((float)votoQuatro / geral) * 100;
    printf("Porcentagem: %.2f%%\n", porcQuatro);

    printf("Votos nulos: %i\n", votoNulo);
    printf("Votos em branco: %i\n", votoBranco);

    float porcentagem1 = 0;

    if (geral > 0) {
        porcentagem1 = ((float)(votoNulo + votoBranco) / geral) * 100;
    }
    printf("Porcentagem de votos nulos e brancos: %.2f%%\n", porcentagem1);


}
