/* Calcule o valor de π a partir da série infinita
π = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
Imprima uma tabela que mostre o valor de π aproximado por um termo dessa série, e depois por dois
termos, três termos, e assim por diante. */

#include <stdio.h>

int main() {

    float pi = 4;

    for (int i = 0; i < 100; i++) {
        printf("%d° termo: %f\n", i+1, pi);
        pi += (4.0/(5.0+4*i))-(4.0/(3.0+4*i));
    }

    return 0;
}