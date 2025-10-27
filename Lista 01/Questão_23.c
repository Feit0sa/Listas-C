/* Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binários. */

#include <stdio.h>

int main() {

    int x, n;

    puts("Digite o valor de entrada:");
    scanf("%d", &x);
    puts("Digite o índice:");
    scanf("%d", &n);

    printf("Resultado do cálculo: %d\n", (x*(2<<(n-1))));
  
    return 0;
}