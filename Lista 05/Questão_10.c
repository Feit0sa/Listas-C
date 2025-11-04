/* Escreva um programa que gere um vetor X com números pseudoaleatórios no intervalo [0,N − 1].
Crie um vetor F com N posições e armazene em cada posição de F a quantidade de ocorrências
dos elementos de X. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 5

int main() {

    // Declarações
    int X[TAM], F[MAX] = {0};
    int *px = X, *pf = F;

    // Gera vetor X
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(px+i) = rand() % MAX;
    }

    // Incrementa as ocorrências de X em F
    for (int i = 0; i < TAM; i++) (*(pf+*(px+i)))++;

    // Printa vetor X
    puts("Vetor X:");
    for (int i = 0; i < TAM; i++) {
        printf("[%p] - [%d] %d\n", px+i, i, *(px+i));
    }

    // Printa vetor F
    puts("");
    puts("Vetor F:");
    for (int i = 0; i < MAX; i++) {
        printf("[%p] - [%d] %d\n", pf+i, i, *(pf+i));
    }


    return 0;
}