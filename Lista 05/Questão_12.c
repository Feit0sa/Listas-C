/* Reimplemente a questão considerando que o vetor Y é dado em função de X da seguinte forma:
onde r é um número pseudoaleatório, xi e yi correspondem ao i-esimo elemento do vetor X e Y ,
respectivamente. Considere os valores limites definidos na questão anterior para yi , caso o valor
obtido a partir de xi esteja fora da faixa. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MR 11
#define MAX 5

int main() {
    
    // Declarações
    int X[TAM], Y[TAM], M[MAX][MAX] = {0}, r;
    int *px = X, *py = Y, (*pm)[MAX] = M, *pr = &r;

    // Gera vetor X
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        *(px+i) = rand() % MAX;
    }

    // Gera vetor Y em função do X
    for (int i = 0; i < TAM; i++) {
        *pr = rand() % MR;

        if (*(px+i)+*pr >= MAX) {
            *(py+i) = MAX-1;
        } else if (*(px+i)-*pr < 0) {
            *(py+i) = 0;
        } else {
            if (*pr <= 3) *(py+i) = *(px+i);
            else if (3 < *pr && *pr <= 5) *(py+i) = *(px+i)-1;
            else if (5 < *pr && *pr <= 7) *(py+i) = *(px+i)+1;
            else if (7 < *pr && *pr <= 9) *(py+i) = *(px+i)-2;
            else if (9 < *pr && *pr <= 10) *(py+i) = *(px+i)+2;
        }
        
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