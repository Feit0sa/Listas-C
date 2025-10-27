/* Implementar um programa para resolver o seguinte problema: José tem 150 centímetros e cresce 2
centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos
Pedro será maior que José? */

#include <stdio.h>

int main() {

    unsigned char jose = 150, pedro = 110, anos = 0;

    while (jose >= pedro) {
        ++anos;
        jose += 2;
        pedro += 3;
    }

    printf("Pedro será maior que José em %d anos\n", anos);

    return 0;
}