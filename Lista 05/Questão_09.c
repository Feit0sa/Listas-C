/* Implemente o método de ordenação bolha utilizando ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10

int main() {
    
    // Declarações
    int v[TAM];
    int *p = v;

    // Gerando o vetor
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(p+i) = rand() % MAX;
    }

    // Printando o vetor antes de ordenar
    printf("Vetor antes de ordenar:\n");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] %d\n", p+i, *(p+i));
    }

    // Ordenando o vetor
    int flag = 1;
    for (int i = 0; i < TAM; i++) {
        flag = 1;
        for (int j = 0; j < TAM-1; j++) {
            if (*(p+j) > *(p+j+1)) {
                *(p+j) = *(p+j)^*(p+j+1);
                *(p+j+1) = *(p+j)^*(p+j+1);
                *(p+j) = *(p+j)^*(p+j+1);
                flag = 0;
            }
        }
        if (flag) break;
    }

    // Printando o vetor depois de ordenar
    printf("\nVetor depois de ordenar:\n");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] %d\n", p+i, *(p+i));
    }
    

    return 0;
}