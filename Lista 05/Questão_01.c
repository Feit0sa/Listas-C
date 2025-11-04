/* Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
também o endereço de memória onde o valor resultante dessa soma está armazenado. */

#include <stdio.h>

int main() {
    
    // Declarações
    int x, y;
    int *px = &x, *py = &y;

    // Entrada
    puts("Digite o valor de x:");
    scanf("%d", px);

    // Processamento com ponteiros
    *py = 2 * *px;

    // Saída
    printf("[%p] px = %d\n", px, *px);
    printf("[%p] py = %d\n", py, *py);
    printf("[%p] x = %d, %d\n", &x, x, *px);
    printf("[%p] y = %d, %d\n", &y, y, *py);
    
    return 0;
}