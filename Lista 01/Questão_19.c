/* Escreva um programa que receba um número inteiro e então determine e imprima se ele é par ou ímpar.
Obs.: Não utilizar estrutura de decisão if. */

#include <stdio.h>

int main() {
    
    int num;

    puts("Digite o valor de entrada:");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            puts("Par");
            break;
        case 1:
            puts("Ímpar");
            break;
        default:
            break;
    }
    
    return 0;
}