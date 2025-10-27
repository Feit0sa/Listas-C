/* Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa
A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main() {

    int A, B, C, soma = 0;

    puts("Digite o valor de entrada para A:");
    scanf("%d", &A);
    puts("Digite o valor de entrada para B:");
    scanf("%d", &B);

    if (A > B) {
        C = A;
        A = B;
        B = C;
    }

    for (int i = A; i <= B; i++) {
        if (i % 3 == 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}