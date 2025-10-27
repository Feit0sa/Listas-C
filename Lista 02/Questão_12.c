/* Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional. */

#include <stdio.h>

int main() {

    int num;

    puts("Digite um número para calcular sua tabuada:");
    scanf("%d", &num);

    for (int i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", i, num, num*i);
    }

    return 0;
}