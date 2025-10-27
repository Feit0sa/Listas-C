/* Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o número de
dias trabalhados pelo vendedor e imprima o valor líquido a ser pago ao mesmo, sabendo que se ele
trabalhou até 10 dias não tem direito à gratificação, se ele trabalhou acima de 10 dias e até 20 dias
tem direito à gratificação de 20%, se ele trabalhou acima de 20 dias tem direito à gratificação de 30%.
Sempre são descontados 10% de imposto de renda em cima do valor bruto. */

#include <stdio.h>

#define DIARIA 50.25

int main() {

    float salario, dias_traalhados;

    puts("Quantos dias o vededor trabalhou?");
    scanf("%f",&dias_traalhados);

    if ((10 < dias_traalhados) && (dias_traalhados < 20)) {
        salario = ((DIARIA*dias_traalhados)*1.2)*0.9;
    } else if (dias_traalhados > 20) {
        salario = ((DIARIA*dias_traalhados)*1.3)*0.9;
    } else {
        salario = (DIARIA*dias_traalhados)*0.9;
    }

    printf("O salário do vendedor é de R$ %.2f", salario);

    return 0;
}