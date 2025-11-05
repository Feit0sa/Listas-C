/* Dado uma matriz X de inteiros e dimensões nxm obtida em tempo de execução. Dado t também inteiro.
Implemente uma função que calcule a matriz Y, conforme a regra a seguir:
Implemente outra função que retorne a quantidade de elementos de valor 1 em Y.
Na função main(), escreva apenas as chamadas para essas funções */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void setY(int **, int **, unsigned, unsigned, unsigned);
int numUns(int **, unsigned, unsigned);

int main() {
    
    int n, m, t;

    puts("Digite as dimensões n e m:");
    scanf("%d %d", &n, &m);
    puts("Digite o valor de t (parâmetro):");
    scanf("%d", &t);
    
    // Alocação dinâmica X
    int **p = malloc(n*sizeof(int *));
    for (int i = 0; i < n; i++) {
        *(p+i) = malloc(m*sizeof(int));
    }

    // Alocação dinâmica Y
    int **q = malloc(n*sizeof(int *));
    for (int i = 0; i < n; i++) {
        *(q+i) = malloc(m*sizeof(int));
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(p+i)+j) = rand() % MAX;
        }
    }

    setY(q, p, m, n, t);

    // Printa X
    puts("");
    puts("Matriz X");
    for (int i = 0; i < n; i++) {
        printf("[ ");
        for (int j = 0; j < m; j++) {
            printf("%d ", *(*(p+i)+j));
        }
        printf("]\n");
    }

    // Printa Y
    puts("");
    puts("Matriz Y");
    for (int i = 0; i < n; i++) {
        printf("[ ");
        for (int j = 0; j < m; j++) {
            printf("%d ", *(*(q+i)+j));
        }
        printf("]\n");
    }

    printf("A quantidade de 1s na matriz Y é [%d]\n", numUns(q, m, n));

    // Libera X e Y
    for (int i = 0; i < n; i++) {
        free(*(p+i));
        free(*(q+i));
    }
    free(p);
    free(q);

    return 0;
}

void setY(int **q, int **p, unsigned m, unsigned n, unsigned t) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (*(*(p+i)+j) >= t) *(*(q+i)+j) = 1;
            else *(*(q+i)+j) = 0;
        }
    }
}

int numUns(int **q, unsigned m, unsigned n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (*(*(q+i)+j)) count++;
        }
    }
    return count;
}