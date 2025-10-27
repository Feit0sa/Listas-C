/* Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o ope-
rador –. */

#include <stdio.h>

int main() {

    unsigned char num1 = 1, num2 = 5;

    printf("Pós-incremento %d\n", num1);
    num1++;    
    printf("Pós-incrementado %d\n", num1);
    printf("Pré-incremento %d\n", num2);
    ++num2;
    printf("Pré-incremento %d\n", num2);

    return 0;
}