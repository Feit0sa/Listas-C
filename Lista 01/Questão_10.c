/* Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real. O
programa deve solicitar o valor da cotação do dólar e também a quantidade de reais que o usuário
deseja converter. */

#include <stdio.h>

int main() {

    float cotacao_dolar, qntd_reais, valor_final;

    printf("Digite a cotação atual do dólar: ");
    scanf("%f",&cotacao_dolar);
    printf("Digite a quantidade de reais que deseja converter: ");
    scanf("%f",&qntd_reais);

    valor_final = qntd_reais/cotacao_dolar;

    printf("O valor final convertido é de US$%.2f\n", valor_final);

    return 0;
}