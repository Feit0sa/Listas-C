/* Escreva um programa que copie uma string para outra usando ponteiros. */

#include <stdio.h>
#include <string.h>

#define TAM 30

int main() {
    
    // Declarações
    char str1[TAM], str2[TAM];
    char *p1 = str1, *p2 = str2;
    
    // Entradas
    puts("Digite a primeira string:");
    fgets(str1, TAM, stdin);
    puts("Digite a segunda string para copiar na primeira:");
    fgets(str2, TAM, stdin);

    // Tirando o Enter
    *(p1+strcspn(p1, "\n")) = '\0';
    *(p2+strcspn(p2, "\n")) = '\0';

    // Print antes de substituir
    printf("Primeira string antes de ser substituida '%s'.\n", p1);
    printf("Segunda string '%s'.\n", p2);

    // Substituindo uma string na outra
    int i;
    for (i = 0; *(p2+i) != '\0'; i++) {
        *(p1+i) = *(p2+i);
    }
    *(p2+i) = '\0';

    // Saída
    printf("Primeira string depois de ser substituida '%s'.\n", p1);
    printf("Segunda string '%s'.\n", p2);

    return 0;
}