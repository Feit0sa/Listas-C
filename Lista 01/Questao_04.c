/* Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garçom. */

#include <stdio.h>

int main() {
    
    int conta;

    printf("Digite o valor da conta: ");
    scanf("%d", &conta);

    printf("Valor total (contando a taxa de serviço): %.2f\n", (conta*1.1));
    
    return 0;
}