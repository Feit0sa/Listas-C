/* Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é múltiplo do
segundo. Obs.: Não utilizar estrutura de decisão if. */

#include <stdio.h>

int main() {
    
    int x, y;

    puts("Digite o primeiro número:");
    scanf("%d", &x);
    puts("Digite o segundo número:");
    scanf("%d", &y);

    switch ( x % y)
    {
    case 0:
        puts("É múltiplo.");
        break;
    
    default:
        puts("Não é múltiplo.");
        break;
    }
    
    return 0;
}