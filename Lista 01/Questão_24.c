/* Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
há neste tempo. */

#include <stdio.h>

int main() {
    
    int s;

    puts("Digite um valor de entrada para os segundos:");
    scanf("%d", &s);

    printf("Há %d horas.\n", (s/3600));
    printf("Há %d minutos.\n", (s/60));
    printf("há %d segundos.\n", s);
    
    return 0;
}