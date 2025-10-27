/* Escreva um programa que leia um número inteiro e positivo F e calcule o fatorial deste número. */

#include <stdio.h>

int main() {

    int fat;

    puts("Digite um valor de entrada:");
    scanf("%d", &fat);

    for (int i = fat-1; i > 0; i--) {
        fat = fat*i;
    }

    printf("Fatorial: %d\n", fat);


    return 0;
}