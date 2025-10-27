/* Escreva um programa que apresente o somatório de todos os números divisíveis por 3 pertencentes ao
intervalo [0,100] e o somatório de todos os números divisíveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um laço de repetição. */

#include <stdio.h>

int main() {

    int soma3 = 0, soma5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
                soma3 += i;
        } else if (i >= 100 && i % 5 == 0) {
                soma5 += i;
        }
    }

    printf("Somatório dos números divisíveis por 3 no intervalo de 0 a 100: %d\n", soma3);
    printf("Somatório dos números divisíveis por 5 no intervalo de 100 a 200: %d\n", soma5);

    return 0;
}