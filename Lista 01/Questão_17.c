/* Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência
e sua área. Use o valor de 3,14159 para “pi”. Faça cada um destes cálculos dentro da instruções (ou
instruções) printf e use o especificador de conversão %f. */

#include <stdio.h>

#define PI 3.14159

int main() {
    
    float raio;

    puts("Digite o tamanho do raio do círculo:");
    scanf("%f", &raio);

    printf("O diâmetro do círculo é %.2f\n", (2*raio));
    printf("A área do círculo é %.2f\n", (PI*raio*raio));

    return 0;
}