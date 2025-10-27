/* Desenvolva um programa que calcule o salário liquido de um professor. Para elaborar o programa, é
necessário possuir alguns dados, tais como o valor da hora aula, número de horas trabalhadas no mês e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salário bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor. */

#include <stdio.h>

int main() {

    float hora_aula, horas_trabalhadas, desconto_INSS, salario_bruto, salario_liquido;

    puts("Digite o valor da sua hora-aula:");
    scanf("%f", &hora_aula);
    puts("Digite quantas horas trabalhou no mês:");
    scanf("%f", &horas_trabalhadas);
    puts("Digite o percentual de desconto do INSS:");
    scanf("%f", &desconto_INSS);

    salario_bruto = hora_aula*horas_trabalhadas;
    salario_liquido = salario_bruto*(1-desconto_INSS);

    printf("O salário bruto do professor é de R$ %.2f\n", salario_bruto);
    printf("O salário líquido do professor é de R$ %.2f\n", salario_liquido);

    return 0;
}