/* Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B
especificada pelo usuúrio. O programa deve funcionar tanto para A > B quanto para B > A. */

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
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}