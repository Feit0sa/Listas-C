/* Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros. */

#include <stdio.h>
#include <string.h>

#define TAM 30

int main() {
    
    // Declarações
    char str[TAM];
    char *p = str;
    
    // Entrada
    puts("Digite a string de entrada");
    fgets(str, TAM, stdin);

    // Tirando o Enter
    *(p+strcspn(p, "\n")) = '\0';

    // Laço contando quantos caracteres possui a string
    int c = 0;
    for (int i = 0; *(p+i) != '\0'; i++) {
        c++;
    }

    // Saída
    printf("Tamanho da string '%s' é [%d]\n", p, c);

    return 0;
}