/* Dado uma string s e um caractere c, implemente uma função que retorne a quantidade de ocorrências de c em s */

#include <stdio.h>
#include <string.h>

#define TAM 20

int numC(char *, char);

int main() {

    char str[TAM], c;
    char *pc = &c;

    puts("Digite a string de entrada:");
    fgets(str, TAM, stdin);
    puts("Digite o caractere parâmetro:");
    scanf("%c", pc);
    str[strcspn(str, "\n")] = '\0';

    printf("A quantidade de vezes que %c aparece em %s é [%d].\n", c, str, numC(str, c));

    return 0;
}

int numC(char *str, char c) {
    int count = 0;
    for (int i = 0; *(str+i) != '\0'; i++) {
        if (*(str+i) == c) count++;
    }
    return count;
}