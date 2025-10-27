/* Um palíndromo é um número, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos é um palíndromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se
ele é ou não um palíndromo. [Dica: use os operadores de divisão e módulo para separar o número em
seus dígitos individuais.] */

#include <stdio.h>

int main() {

    int num, invertido, unidade, dezena, centena, milhar, dezena_milhar;

    puts("Digite um valor de entrada de 5 dígitos:");
    scanf("%d", &num);

    dezena_milhar = num/10000;
    milhar = (num/1000)%10;
    centena = (num/100)%10;
    dezena = (num/10)%10;
    unidade = num%10;

    invertido = unidade*10000+dezena*1000+centena*100+milhar*10+dezena_milhar;

    if (num == invertido) {
        puts("É um palíndromo.");
    } else {
        puts("Não é um palíndromo.");
    }

    return 0;
}