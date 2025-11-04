/* Escreva um programa que gere dois vetores (X e Y ) com números pseudoaleatórios no intervalo
[0,N − 1]. Crie uma matriz M com dimensões N xN que armazene as coocorrências dos elementos
de X e Y da seguinte forma: */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 5

int main() {
    
    // Declarações
    int X[TAM], Y[TAM], M[MAX][MAX] = {0};
    int *px = X, *py = Y, (*pm)[MAX] = M;

    // Gera vetores X e Y
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(px+i) = rand() % MAX;
        *(py+i) = rand() % MAX;
    }
    
    // Incrementa as coocerrências de X e Y em M
    for (int i = 0; i < TAM; i++) (*(*(pm+*(py+i))+*(px+i)))++;

    // Printa vetor X
    puts("Vetor X:");
    for (int i = 0; i < TAM; i++) {
        printf("[%d] %d\n", i, *(px+i));
    }

    // Printa vetor Y
    puts("");
    puts("Vetor Y:");
    for (int i = 0; i < TAM; i++) {
        printf("[%d] %d\n", i, *(py+i));
    }

    // Printa matriz M
    puts("");
    puts("Matriz M:");
    for (int i = 0; i < MAX; i++) {
        printf("[ ");
        for (int j = 0; j < MAX; j++) {
            printf("%d ", *(*(pm+i)+j));
        }
        printf("]\n");
    }

    return 0;
}