/* Implemente uma função que dado um vetor X de inteiros, organize em um vetor fornecido como argumento os endereços de um elemento par e de um elemento ímpar de X. Se não houver, deve haver NULO na posição */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10

void parimparVetor(int **, int *, unsigned);

int main() {

    int X[TAM];
    int *pX = X, *parimpar[2];

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(pX+i) = rand() % MAX;
    }

    puts("Vetor X");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] %d\n", pX+i, *(pX+i));
    }

    parimparVetor(parimpar, pX, TAM);

    puts("");
    puts("Vetor com o primeiro par e primeiro ímpar:");
    for (int i = 0; i < 2; i++) {
        if (*(parimpar+i) != NULL) {
            printf("[%p] %d\n", *(parimpar+i), **(parimpar+i));
        } else {
            printf("[%p] NULL\n", *(parimpar+i));
        }
    }

    return 0;
}

void parimparVetor(int **parimpar, int *px, unsigned tamanho) {
    *parimpar = NULL;
    *(parimpar+1) = NULL;
    for (int i = 0; i < tamanho; i++) {
        if (*(px+i) % 2 == 0 && *parimpar == NULL) *parimpar = px+i;
        else if (*(px+i) % 2 == 1 && *(parimpar+1) == NULL) *(parimpar+1) = px+i;
    }
}