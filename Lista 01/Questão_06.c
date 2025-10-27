/* Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos. */

#include <stdio.h>

int main() {

    int h, min, s;

    printf("Digite a quantidade de horas: ");
    scanf("%d",&h);
    printf("Digite a quantidade de minutos: ");
    scanf("%d",&min);
    printf("Digite a quantidade de segundos: ");
    scanf("%d",&s);

    printf("A quantidade total de segundos é: %d\n", (h*3600+min*60+s));

    return 0;
}