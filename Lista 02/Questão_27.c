/* Escreva um programa que receba vários números inteiros (em uma estrutura de laço) e apresente o
produto do maior pelo menor número apresentado. (Obs.: Não utilize vetores.) A condição de saída
do laço é o usuário digitar um número negativo e par. */

#include <stdio.h>

int main() {

    int num, maior, menor, exit, inicializado = 0;

    do {
        
        puts("Digite o primeiro valor de entrada:");
        scanf("%d", &num);
        if (!inicializado) {
            maior = menor = num;
            inicializado = 1;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
        puts("Digite o segundo valor de entrada:");
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }

        printf("O produto do maior pelo menor é %d\n", (maior*menor));
        puts("Deseja continuar? (número negativo par para sair)");
        scanf("%d", &exit);
        puts("");

    } while (exit > 0 && exit % 2 == 1);

    return 0;
}