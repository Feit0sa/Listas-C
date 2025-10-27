/* Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a 
fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

#include <stdio.h>

int main() {
    
    int volume, comprimento, largura, altura;

    puts("Digite o comprimento da caixa retangular: ");
    scanf("%d",&comprimento);
    puts("Digite a largura da caixa retangular: ");
    scanf("%d",&largura);
    puts("Digite a altura da caixa retangular: ");
    scanf("%d",&altura);

    volume = comprimento*largura*altura;

    printf("O volume da caixa retangular é de %d u.m²\n", volume);
    
    return 0;
}