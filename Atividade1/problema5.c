#include <stdio.h>
// Faça um programa que calcule a média final de um aluno na disciplina de 
// Introdução à Programação, em que  são  realizadas 4 avaliações: 2 
// avaliações na Etapa 1 e 2 avaliações na Etapa 2. O programa deve calcular a 
// média de cada etapa e, em seguida, calcular a média final da disciplina, 
// sendo que a Média da Etapa 1 tempo peso 2 e a Média da Etapa 2 tem peso 3. 
// Mostre na tela o resultado da média final. 

// Etapa 1:
int main(){
    int prova1_Etapa1, prova2_Etapa1;
    // Etapa 2:
    int prova1_Etapa2, prova2_Etapa2;
    // Médias
    float mediaE1, mediaE2, mediaFinal;

    // Etapa 1
    // recebe nota 1 
    printf("--------- Etapa 1 ---------\n");
    printf("Digite a nota da Prova 1: \n");
    scanf("%i", &prova1_Etapa1);
    // recebe nota 2
    printf("Digite a nota da Prova 2: \n");
    scanf("%i", &prova2_Etapa1);
    // calculo média da etapa 1
    mediaE1 = (prova1_Etapa1 + prova2_Etapa1) / 2.0;
    // exibe media da Etapa 1:
    printf("Essa e a media da Etapa 1: %.2f\n", mediaE1);

    printf("--------- Etapa 2 ---------\n");
    printf("Digite a nota da Prova 1: \n");
    scanf("%i", &prova1_Etapa2);

    printf("Digite a nota da Prova 2: \n");
    scanf("%i", &prova2_Etapa2);

    // calculo média da etapa 1
    mediaE2 = (prova1_Etapa2 + prova2_Etapa2) / 2.0;
    printf("Essa e a media da Etapa 2: %.2f\n", mediaE2);
    // calcula média final
    printf("--------- Media Final ---------\n");
    mediaFinal = (mediaE1 * 2 + mediaE2 * 3) / 5;
    printf("--------- %.2f ---------\n", mediaFinal);
    return 0;
}

