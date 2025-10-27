/* Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal. */

#include <stdio.h>

int main() {

    int x;

    printf("Digite um valor de entrada: ");
    scanf("%d", &x);

    printf("Valor em hexadecimal: %X\n", x);
    printf("Valor em octal: %o\n", x);

    return 0;
}