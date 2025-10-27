/* Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima
a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números. */

#include <stdio.h>

int main() {

    int x, y;

    puts("Digite o primeiro número:");
    scanf("%d", &x);
    puts("Digite o segundo número:");
    scanf("%d", &y);

    printf("Soma: %d\n", (x+y));
    printf("Produto: %d\n", (x*y));
    printf("Diferença: %d\n", (x-y));
    printf("Quociente: %d\n", (x/y));
    printf("Resto de divisão: %d\n", (x%y));

    return 0;
}