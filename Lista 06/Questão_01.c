/* Escreva um programa que receba dois valores por linha de execução e realize a soma ou multi-
plicação, conforme um código de operação também recebido por linha de execução. */

#include <stdio.h>

#define TAM 20

int operacao(int, int, int);

int main() {
    
    int x, y, op, res;

    puts("Digite o primeiro número:");
    scanf("%d", &x);
    puts("Digite o segundo número:");
    scanf("%d", &y);
    printf("Digite a operação:\n0 - Multiplicação\n1 - Soma\n");
    scanf("%d", &op);

    res = operacao(x, y, op);
    
    printf("A operação escolhida foi a %d e o resultado é %d\n", op, res);

    return 0;
}

int operacao(int num1, int num2, int op) {
    if (op) return num1+num2;
    else return num1*num2;
}