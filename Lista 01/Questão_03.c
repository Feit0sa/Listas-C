/* Sabendo que os argumentos da função “printf” podem ser expressões (a+b, a/b, a*b...), e não somente
argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio. */

#include <stdio.h>

int main() {
    
    int x;

    printf("Digite o valor de entrada: ");
    scanf("%d", &x);

    printf("O triplo de %d é %d\n", x, 3*x);
    printf("O quadrado de %d é %d\n", x, x*x);
    printf("O meio de %d é %.1f\n", x, x/2.0);
    
    return 0;
}