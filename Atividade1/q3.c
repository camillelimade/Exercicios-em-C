#include <stdio.h>
// Faça um programa que calcule o salário líquido de um funcionário, que é 
// calculado em função das horas trabalhadas no mês. Os dados fornecidos pelo usuário 
// devem ser: a quantidade de horas trabalhadas no mês, o valor da hora 
// trabalhada e o percentual (%) de desconto do INSS.
int main(){
    float horasTrab, valorHora, percentual, descontoINSS, salarioBruto, salarioLiquido;
    printf("-------------------------------\n");
    printf("Digite a quantidade de horas trabalhadas no mes: \n");
    scanf("%f" , &horasTrab);
    printf("-------------------------------\n");
    printf("Digite quanto ganha por hora: \n");
    scanf("%f", &valorHora);
    printf("-------------------------------\n");
    printf("Digite o percentual de desconto aplicado: (ex: 14 se for 14%%) \n");
    scanf("%f", &percentual);
    // salario bruto
    salarioBruto = horasTrab * valorHora;
    // desconto
    descontoINSS = salarioBruto * (percentual / 100);
    // salario liquido
    salarioLiquido = salarioBruto - descontoINSS;
    printf("-------------------------------\n");
    printf("Esse e seu salario: %.2f\n", salarioLiquido);
    return 0;
}