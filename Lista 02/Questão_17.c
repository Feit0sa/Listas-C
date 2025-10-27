/* Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a fórmula de conversão.
F = (9 * C + 160) / 5*/

#include <stdio.h>

int main() {

    int celsius = 0, fahrenheit = (9*celsius+160)/5;

    for (int i = celsius; i <= 100; i = i+10) {
        fahrenheit = (9*i+160)/5;
        printf("%d°C\n", i);
        printf("%d°F\n", fahrenheit);
        printf("\n");
    }

    return 0;
}