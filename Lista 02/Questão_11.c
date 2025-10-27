/* Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O
programa deve funcionar tanto para A > B quanto para B > A. */

#include <stdio.h>

int main() {

    int A, B, C;

    puts("Digite um valor de entrada para A:");
    scanf("%d", &A);
    puts("Digite um valor de entrada para B:");
    scanf("%d", &B);

    if (A > B) {
        C = A;
        A = B;
        B = C;
    }

    for (int i = A; i <= B; i++) {
        if (i % 4 == 0) {
            printf("%d\n", i*i);
        }
    }

    return 0;
}