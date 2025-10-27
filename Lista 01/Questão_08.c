/* Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores sucessor e antecessor. */

#include <stdio.h>

int main() {
    
    unsigned char num;

    printf("Digite um valor de entrada de 2 a 254: ");
    scanf("%hhu", &num);

    printf("O sucessor de %hhu é %hhu e o antecessor é %hhu\n", num, (num+1), (num-1));

    return 0;
}