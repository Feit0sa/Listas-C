/* Escreva um programa que imprima um retângulo, uma elipse, uma seta e um losango como se segue: */
// i entre 1 e 7
// j entre 1 e 7


#include <stdio.h>

int main() {

    int linhas = 9;

    for (int i = 0; i < linhas; i++) {
        // Retângulo
        for (int j  = 0; j < 9; j++) {
            if ((j > 0 && i > 0) && (j < 8 && i < 8)) {
                printf("  ");
            } else {
                printf("* ");
            }
        }
        printf("  ");

        // Elipse
        for (int j = 0; j < 7; j++) {
            // if...else para arredondar as linhas mais externas
            if (i == 0 || i == 8) {
                if (j < 2 || j > 4) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            // else if para arredondar as linhas mais internas
            else if (i == 1 || i == 7) {
                if (j != 1 && j != 5) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else if (i > 1 && i < 7) {
                if (j > 0 && j < 6) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            // else para printar a borda
            else {
                printf("* ");
            }
        }
        printf("  ");

        // Seta
        for (int j = 0; j < 5; j++) {
            // if else para fazer o começo da ponta
            if (i == 0) {
                if (j != 2) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            // else if para fazer a segunda camada da ponta
            else if (i == 1) {
                if (j != 0 && j != 4) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            // else if para fazer o corpo
            else if (i > 2) {
                if (j != 2) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            // printar a flecha
            else {
                printf("* ");
            }
        }
        printf("  ");

        // Losango
        for (int j = 0; j < 9; j++) {
            if (i == 0 || i == 8) {
                if (j != 4) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else if (i == 1 || i == 7) {
                if (j != 3 && j != 5) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else if (i == 2 || i == 6) {
                if (j != 2 && j != 6) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else if (i == 3 || i == 5) {
                if (j != 1 && j != 7) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else if (i == 4) {
                if (j != 0 && j != 8) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    
    return 0;
}