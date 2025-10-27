/* Escreva um programa que imprima uma tabela dos equivalentes binário, octal e hexadecimal dos
números decimais no intervalo de 1 a 256. */

#include <stdio.h>

int main() {

    for (int i = 1; i <= 256; i++) {

        imprime_binario(i); // Binário
        printf("%o\n", i); // Octal
        printf("%X\n", i); // Hexadecimal
        printf("\n");

    }
}

void imprime_binario(int n) {
    for (int i = sizeof(n)*8 - 1; i >= 0; i--) {
        printf("%d\n", (n >> i) & 1);
    }
}