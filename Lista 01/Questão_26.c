/* Escreva um programa que solicite 3 números em ponto flutuante e imprima a média aritmética e
geométrica. (Utilize a função pow(base, expoente) da biblioteca math.h). */

#include <stdio.h>
#include <math.h>

int main() {
    
    float x, y, z, prod;

    puts("Digite o valor do primeiro número:");
    scanf("%f", &x);
    puts("Digite o valor do segundo número:");
    scanf("%f", &y);
    puts("Digite o valor do terceiro número:");
    scanf("%f", &z);

    prod = x*y*z;

    printf("Média Aritmética: %.2f\n", (x+y+z)/3);
    printf("Média Geométrica: %.2f\n", pow(prod, (1.0/3.0)));

    return 0;
}