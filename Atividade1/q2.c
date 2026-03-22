// Faça um programa que leia o horário de entrada (hora e minuto) e a hora de saída (hora e minuto) de uma aula e informe de quanto tempo é a duração da aula.
#include <stdio.h>
int main()
{
    // declarando variaveis para adquirir os horarios
    int horaEntrada, minEntrada;
    int horaSaida, minSaida;
    // declarando variaveis para manipulação da diferença
    int totalEntrada, totalSaida, duracao;
    int horas, minutos;
    // pede e recebe horário de entrada
    printf("-------------------------------\n");
    printf("Digite o horario de entrada: (ex: 12 30) \n");
    scanf("%d %d", &horaEntrada, &minEntrada);
    // pede e recebe horário de saída
    printf("-------------------------------\n");
    printf("Digite o horario de saida: (ex: 14 00)\n");
    scanf("%d %d", &horaSaida, &minSaida);
    // transforma tudo em minutos
    totalEntrada = horaEntrada * 60 + minEntrada;
    totalSaida = horaSaida * 60 + minSaida;
    // calculo da duração da aula
    duracao = totalSaida - totalEntrada;
    // transforma de volta para horas e minutos
    horas = duracao / 60;
    minutos = duracao % 60;
    printf("-------------------------------\n");
    printf("Duracao da aula: %d horas e %d minutos\n", horas, minutos);
    printf("-------------------------------\n");
    return 0;
}