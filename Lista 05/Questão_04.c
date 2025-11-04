/* Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste
o vetor com tipos de dados diferentes, analise os endereços. O que você observou? */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 100

int main() {

    // Declarações
    int v[TAM];
    int *pv = v; // int *pv = &v[0]
    char w[TAM];
    char *pw = w; // int *pw = &w[0]

    // Gerando os vetores com ponteiros como índicie
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(pv+i) = rand() % MAX;
        *(pw+i) = rand() % MAX;
    }

    // Printando o vetor v usando ponteiros
    puts("Vetor v:");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] %d\n", pv+i, *(pv+i));
    }

    // Printando o vetor v usando ponteiros
    puts("");
    puts("Vetor w:");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] %d\n", pw+i, *(pw+i));
    }

    // Observei que o endereço incremente de acordo com o valor que o tipo de dado usa de mémoria
    return 0;
}