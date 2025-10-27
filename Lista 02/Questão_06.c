/* Escreva um programa que transforme o computador em uma urna eletrônica para eleição para pre-
sidente de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser
dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto
diferente dos já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto
à confirmação do seu voto. No final da eleição o programa deve emitir um relatório contendo as por-
centagens de votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O
código para finalizar a urna (votação) é o usuário digitar algum número negativo. */

#include <stdio.h>

int main() {
    
    float renata = 0, paulo = 0, branco = 0, nulo = 0;
    int voto = 0;
    char confirmacao;

    do {
        printf("Eleições para Presidente\nCandidatos:\nPaulo - 5\nRenata - 7\nBranco - 0\nNulo - Qualquer\nSair - Qualquer negativo\nEm quem deseja votar? ");
        scanf("%d", &voto);
        puts("Confirmar voto? (s/n)");
        scanf(" %c", &confirmacao);

        if (confirmacao == 's') {
            switch (voto) {
            case 5:
                paulo++;
                break;
            case 7:
                renata++;
                break;
            case 0:
                branco++;
                break;
            default:
                nulo++;
                break;
            }
            puts("");
        } else {
            puts("");
            continue;
        }        
    } while (voto > -1);

    printf("Paulo teve %.0f possuindo %.2f%% dos votos válidos.\n", paulo, (paulo/(paulo+renata))*100);
    printf("Renata teve %.0f possuindo %.2f%% dos votos válidos.\n", renata, (renata/(paulo+renata))*100);
    printf("Teve %.0f votos brancos,\n", branco);
    printf("Teve %.0f votos nulos.\n", nulo);


    if (renata == 0 && paulo == 0) {
        puts("Votação inválida!");
    } else if (paulo > renata) {
        puts("Paulo é eleito a presidente!");
    } else {
        puts("Renata é eleita a presidente!");
    }

    return 0;
}