/* Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condição de termino do programa é quando o usuário digitar zero. */

#include <stdio.h>

int main() {

    unsigned char exit = 1, n, menor = 255, maior = 0;

    while (exit != 0) {
        puts("Digite o primeiro número:");
        scanf("%hhu", &n);
        if (n > maior) {
            maior = n;
        } else if (n < menor) {
            menor = n;
        }
        puts("Digite o segundo número:");
        scanf("%hhu", &n);
        if (n > maior) {
            maior = n;
        } else if (n < menor) {
            menor = n;
        }

        printf("O menor número é %hhu\n", menor);
        printf("O maior número é %hhu\n", maior);

        puts("Deseja continuar? (Tecle 0 para sair do programa)");
        scanf("%hhu", &exit);
    }

    return 0;
}