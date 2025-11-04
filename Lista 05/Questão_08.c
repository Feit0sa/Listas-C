/* Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros. */

#include <stdio.h>
#include <string.h>

#define TAM 20

int main() {
    
    // Declarações
    char str[TAM], c;
    char *ps = str, *pc = &c;
    int pos[TAM], qtd = 0;
    int *pp = pos, *pq = &qtd;

    // Entradas
    puts("Digite a string de entrada:");
    fgets(str, TAM, stdin);
    puts("Digite o caractere que deseja encontrar:");
    scanf(" %c", pc);

    // Removendo o Enter
    *(ps+strcspn(ps, "\n")) = '\0';

    // Laço contando quantas repetiçoes de c e suas posições na string
    int j = 0;
    for (int i = 0; *(ps+i) != '\0'; i++) {
        if (*pc == *(ps+i)) {
            (*pq)++;
            *(pp+j) = i;
            j++;
        }
    }

    // Saídas
    printf("String de entrada '%s'.\n", ps);
    printf("Caractere em busca '%c'.\n", *pc);
    printf("Quantidade de vezes que ele aparece na string [%d].\n", *pq);
    printf("Posições em que ela aparece [ ");
    if (j) {
        for (int i = 0; i < j; i++) {
            printf("%d ", *(pp+i));
        }
        printf("].\n");
    } else {
        printf("nenhuma ]");
    }

    return 0;
}