/* Escreva um programa que receba a entrada de um número de três dígitos, separe o número em seus
dígitos componentes e reconstrua um número com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321. */

#include <stdio.h>

int main() {

    int num, centena, dezena, unidade;

    puts("Digite um número de entrada de três dígitos:");
    scanf("%d", &num);

    centena = num/100;
    dezena = (num/10)%10;
    unidade = num%10;

    num = unidade*100+dezena*10+centena;

    printf("Inverso: %d\n", num);

    return 0;
}