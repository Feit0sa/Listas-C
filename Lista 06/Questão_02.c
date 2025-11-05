/* Escreva um programa em C que informe o endereço do menor elemento de um vetor de inteiros
gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100

// Protótipo de funções
void setVetor(int *, unsigned);
void printVetor(int *, unsigned);
int *getMenorElemento(int *, unsigned);

int main() {

    // Declaração
    int v[TAM];

    // Chamando funções
    setVetor(v, TAM);
    printVetor(v, TAM);

    // Atribuição por função
    int *pMenor = getMenorElemento(v, TAM);

    puts("");
    puts("=====Menor elemento=====");
    printf("[%p] %d\n", pMenor, *pMenor);

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

// Retorna o menor elemento do vetor
int *getMenorElemento(int *p, unsigned tamanho) {
    int *pMenor = p;
    for (int i = 0; i < tamanho; i++) {
        pMenor = (*pMenor > *(p+i))?p+i:pMenor;
    }
    return pMenor;
}