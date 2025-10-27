/* Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo é que a
variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores
após a efetivação do processamento da troca. */

#include <stdio.h>

int main() {
    
    unsigned char A = 10, B = 20, C;

    printf("%hhu, %hhu\n", A, B);

    C = A;
    A = B;
    B = C;

    printf("%hhu, %hhu\n", A, B);
    
    return 0;
}