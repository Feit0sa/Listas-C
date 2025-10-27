/* Refaça o programa da Questão 1, utilizando a estrutura de repetição com teste no final. */

#include <stdio.h>

int main() {

    unsigned char dia, exit;

    do {

        puts("Digite um valor de 1 a 7 correspondente a um dia da semana:");
        scanf("%hhu", &dia);

        switch (dia)
        {
        case 1:
            puts("Domingo");
            break;
        case 2:
            puts("Segunda-feira");
            break;
        case 3:
            puts("Terça-feira");
            break;
        case 4:
            puts("Quarta-feira");
            break;
        case 5:
            puts("Quinta-feira");
            break;
        case 6:
            puts("Sexta-feira");
            break;
        case 7:
            puts("Sábado");
            break;
        default:
            puts("Esse valor não corresponde a um dia da semana válido");
            break;
        }

        puts("Deseja continuar? (Tecle 0 para parar o programa)");
        scanf("%hhu", &exit);

    } while (exit != 0);

    return 0;
}