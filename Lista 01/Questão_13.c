/* Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A fórmula de versão é F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius. */

#include <stdio.h>

int main() {
    
    float temp_celsius, temp_fahrenheit;

    puts("Digite a temperatura em graus celsius:");
    scanf("%f", &temp_celsius);
    
    temp_fahrenheit = (9*temp_celsius+160)/5;

    printf("A temperatura em Fahrenheit é de %.2f °F\n", temp_fahrenheit);

    return 0;
}