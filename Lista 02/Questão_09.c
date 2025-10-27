/* A série de Fibonacci  é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a série de Fibonacci até o vigésimo termo. */

#include <stdio.h>

int main() {

    int termo = 1, termo_anterior = 0;

    for (int i = 1; i <= 20; i++) {
        printf("%d\n", termo);
        termo = termo_anterior+termo;
        termo_anterior = termo-termo_anterior;
    }

    return 0;
}