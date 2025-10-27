/* Construir um programa que apresente como resultado o fatorial dos valores ímpares situados na faixa
número de 1 a 10. */

#include <stdio.h>

int main() {

    double fat = 1;

    for (int i  = 1; i <= 10; i++) {
        fat = 1;
        if (i % 2 == 1) {
            for (int j = 1; j < i+1; j++) {
                fat *= j;
            }
            printf("%.0lf\n", fat);
        }
    }
    return 0;
}