/* Implemente um programa que tenha como entrada um número (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terça, quarta, quinta,
sexta, sábado). Se o número lido não estiver no intervalo 1-7, imprima: “Número de dia não válido”. O
programa deve permanecer executando até que o usuário tecle o numero 0. (Utilize obrigatoriamente
teste no início). */

#include <stdio.h>

int main() {
    
    unsigned char dia, exit = 1;

    while (exit != 0) {
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
    }

    return 0;
}