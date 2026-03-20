// importa biblioteca de printf e scanf
#include <stdio.h>
int main()
{
    int tempo, horas, minutos, segundos, resto;
    // recebe segundos
    printf("-------------------------------\n");
    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &tempo);
    printf("-------------------------------\n");
    // uma hora tem 3600 segundos
    horas = tempo / 3600;
    // recolhendo o resto dos segundos que sobram tirando as horas
    resto = tempo % 3600;
    // descobrindo quantidade de minutos
    minutos = resto / 60;
    // quantidade de segundos sobrando
    segundos = resto % 60;
    // exibir pro usuário
    
    printf("%d horas %d minutos %d segundos \n", horas, minutos, segundos);
    printf("-------------------------------\n");
    return 0;
}
