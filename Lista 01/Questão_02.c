/* Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal. */

#include <stdio.h>

int main() {

    float x;

    printf("Digite o valor de entrada com casa decimal: ");
    scanf("%f",&x);

    printf("Valor de saída: %.1f\n", x);

    return 0;
}