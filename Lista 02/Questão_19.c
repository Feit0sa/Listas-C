/* Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma
faixa especificada pelo usuério. */

#include <stdio.h>

int main() {

    int A, B, C;
    float qntd_termos = 0, soma = 0;

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
        qntd_termos++;
    }

    printf("A média aritmética do somatório no intervalo de %d a %d é %.2f\n", A, B, (soma/qntd_termos));

    return 0;
}