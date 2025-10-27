/* Escrever um programa que receba um valor inteiro do usuário e apresente o seu valor absoluto (módulo).
Não utilize estrutura de decisão if. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;

    puts("Digite um valor de entrada para receber o seu valor absoluto:");
    scanf("%d", &num);


    
    printf("O valor absoluto de %d é %d\n", num, abs(num));

    return 0;
}