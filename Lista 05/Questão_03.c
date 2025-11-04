/* Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor
valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros. */

#include <stdio.h>

#define EXIT 0

int main() {

    // Declarações
    int menor, x;
    int *px = &x, *pm = &menor;

    // Laço que mostra sempre o menor até EXIT
    int count = 0;
    do {
        puts("Digite um número:");
        scanf("%d", px);

        if (count) {
            *pm = (*px < *pm)?*px:*pm;
        } else menor = x;
        count++;
        printf("O menor número até agora foi [%d]\n", *pm);
    } while(x != EXIT);

    return 0;
}