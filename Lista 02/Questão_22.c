/* Escreva um programa que leia um número inteiro e determine e imprima quantos dígitos no inteiro são
algarismos 7. */

#include <stdio.h>

int main() {

    int num, digito, count = 0;

    puts("Digite um valor de entrada:");
    scanf("%d", &num);

    int temp = (num < 0)? -num : num;

    do {
        digito = temp % 10; // Pega o último dígito
        
        if (digito == 7) {
            count++;
        }

        temp /= 10; // Remove o último dígito

    } while (temp != 0);

    printf("O valor de entrada possui %d número(s) 7.\n", count);

    return 0;
}