/* Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois
pontos no plano. (Utilize a função sqrt (numero), biblioteca math.h). 
d = sqrt((x2-x1)²+(y2-y1)²)*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, distancia;

    // Leitura das coordenadas do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    // Leitura das coordenadas do segundo ponto
    printf("\nDigite as coordenadas do segundo ponto:\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    // Cálculo da distância usando a fórmula: d = √[(x2-x1)² + (y2-y1)²]
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibição do resultado
    printf("\nA distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", 
           x1, y1, x2, y2, distancia);

    return 0;
}