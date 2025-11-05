/* Dado um vetor X de tamanho n definido pelo usuário, normalize seus valores para intervalos [0,1] utilizando a fórmula:
onde Xmin e Xmax representam, respectivamente, o menor e o maior valor em X.
Retorne o vetor Y resultante após a normalização. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void setVetor(int *, unsigned);
void setY(int *, float *, int *, int *, unsigned);
void printVetor(int *, unsigned);
void printVetorY(float *, unsigned);
int *getMenor(int *, unsigned);
int *getMaior(int *, unsigned);

int main() {

    int TAM;

    puts("Digite o tamanho do vetor:");
    scanf("%d", &TAM);

    int X[TAM];
    float Y[TAM];

    setVetor(X, TAM);
    int *pMaior = getMaior(X, TAM);
    int *pMenor = getMenor(X, TAM);

    setY(X, Y, pMaior, pMenor, TAM);

    puts("Vetor X:");
    printVetor(X, TAM);
    puts("");
    puts("Vetor Y (normalizado):");
    printVetorY(Y, TAM);

    return 0;
}

void setVetor(int *p, unsigned tamanho) {
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        *(p+i) = rand() % MAX;
    }
}

void printVetor(int *p, unsigned tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%p] %d\n", p+i, *(p+i));
    }
}

void printVetorY(float *p, unsigned tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("[%p] %.2f\n", p+i, *(p+i));
    }
}

int *getMenor(int *p, unsigned tamanho) {
    int *pMenor = p;
    for (int i = 0; i < tamanho; i++) 
        pMenor = (*pMenor > *(p+i)) ? (p+i) : pMenor;
    return pMenor;
}

int *getMaior(int *p, unsigned tamanho) {
    int *pMaior = p;
    for (int i = 0; i < tamanho; i++) 
        pMaior = (*pMaior < *(p+i)) ? (p+i) : pMaior;
    return pMaior;
}

void setY(int *X, float *Y, int *pMaior, int *pMenor, unsigned tamanho) {
    if (*pMaior == *pMenor) {
        for (int i = 0; i < tamanho; i++) *(Y+i) = 0;
        return;
    }

    for (int i = 0; i < tamanho; i++) *(Y+i) = (float)(*(X+i)-*pMenor)/(*pMaior-*pMenor);
}