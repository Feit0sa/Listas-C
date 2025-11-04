/* Escreva um programa que troque o valor de dois números utilizando ponteiros. */

#include <stdio.h>

int main() {
    
    // Declarações
    int x = 10, y = 20;
    int *px = &x, *py = &y, *temp;

    // Print antes da troca com ponteiros
    printf("Antes da troca:\n[%p] x = %d\n[%p] y = %d\n", px, *px, py, *py);

    // Troca com ponteiros
    temp = px;
    px = py;
    py = temp;

    // Print depois da troca com ponteiros
    printf("\nDepois da troca:\n[%p] x = %d\n[%p] y = %d\n", px, *px, py, *py);
    
    return 0;
}