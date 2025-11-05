/* Modifique a questão anterior criando uma função que armazena em um vetor os endereços do menor
e do maior elemento do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100

// Protótipo de funções
void setVetor(int *, unsigned);
void printVetor(int *, unsigned);
void minmaxVetor(int *, int **, unsigned);
void printVetorP(int **, unsigned);

int main() {

    // Declaração
    int v[TAM];
    int *min_max[2];

    // Chamando funções
    setVetor(v, TAM);
    puts("Vetor:");
    printVetor(v, TAM);
    minmaxVetor(v, min_max, TAM);
    puts("");
    puts("Vetor com os menor e maior elementos:");
    printVetorP(min_max, 2);

    return 0;
}

// Gera o vetor
void setVetor(int *p, unsigned tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        *(p+i) = rand() % MAX;
    }
}

// Printa o vetor
void printVetor(int *p, unsigned tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%p] %d\n", p+i, *(p+i));
    }
}

void minmaxVetor(int *p, int **q, unsigned tamanho) {
    *q = p;
    *(q+1) = p;
    for (int i = 1; i < tamanho; i++) {
        if (*(p+i) < **q) *q = (p+i);
        if (*(p+i) > **(q+1)) *(q+1) = (p+i);
    }
}

void printVetorP(int **p, unsigned tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%p] %d\n", *(p+i), **(p+i));
    }
}