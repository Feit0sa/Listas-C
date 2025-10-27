/* Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado. */

#include <stdio.h>

int main() {
    
    int x;

    printf("Digite um valor de entrada: ");
    scanf("%d",&x);

    printf("O quadrado do valor de entrada é: %d\n", x*x);
    
    return 0;
}