/* Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida. */

#include <stdio.h>

int main() {

    float x, y;

    do {

        puts("Digite o primeiro número:");
        scanf("%f", &x);
        puts("Digite o segundo número:");
        scanf("%f", &y);

        if (y == 0) {
            puts("O segundo número não pode ser nulo, digite outro número.");
        }
        puts("");
    } while (y == 0);

    printf("Divisão: %.2f\n", (x/y));

    return 0;
}