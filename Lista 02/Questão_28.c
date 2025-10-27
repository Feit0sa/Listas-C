/* Escreva um programa que receba dois valores numéricos X e Y (unsigned char) e esconda todos os bits
de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores
a Y. (Obs.: Não utilizar valores para Y menores que 5). */


#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char vetor[8] = {0};

    printf("Digite o valor de X (0-255): ");
    scanf("%hhu", &X);
    
    do {
        printf("Digite o valor de Y (>=5 e <=15): ");
        scanf("%hhu", &Y);
    } while (Y < 5 || Y > 15);

    for (int i = 0; i < 8; i++) {
        if (i < 4) {
            vetor[i] = Y-4+i;
        } else {
            vetor[i] = Y-3+i;
        }
    }
    
    for (int i = 0; i < 8; i++) {
        vetor[i] = (vetor[i] & 0b11111110 | (X >> 7-i) & 0b1);
    }

    for (int i = 0; i < 8; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}