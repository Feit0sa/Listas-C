/* Escreva um programa que concatene duas strings utilizando ponteiros. */

#include <stdio.h>
#include <string.h>

#define TAM 20

int main() {

    // Declarações
    char str1[TAM], str2[TAM], conc[2*TAM];
    char *p1 = str1, *p2 = str2, *pc = conc;

    // Entradas
    puts("Digite a primeira string:");
    fgets(str1, TAM, stdin);
    puts("Digite a segunda string para copiar na primeira:");
    fgets(str2, TAM, stdin);

    // Removendo o Enter
    *(p1+strcspn(p1, "\n")) = '\0';
    *(p2+strcspn(p2, "\n")) = '\0';

    // Concatenando p1 em pc
    unsigned i = 0, j = 0;
    while (*(p1+j) != '\0') {
        *(pc+i) = *(p1+i);
        i++;
        j++;
    }

    // Concatenando p2 em pc
    j = 0;
    while (*(p2+j) != '\0') {
        *(pc+i) = *(p2+j);
        i++;
        j++;
    }
    *(pc+i) = '\0';

    // Saídas
    printf("Primeira string '%s'.\n", p1);
    printf("Segunda string '%s'.\n", p2);
    printf("Strings concatenadas '%s'.\n", pc);

    return 0;
}