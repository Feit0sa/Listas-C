/* Um triângulo retângulo pode ter lados que são valores inteiros. O conjunto de três valores inteiros para
os lados de um triângulo retângulo é chamado de tripla de Pitágoras. Esses três lados precisam satisfazer
o relacionamento de que a soma do quadrado de dois catetos é igual ao quadrado da hipotenusa. Ache
todas as triplas de Pitágoras não superiores a 500 para cateto1, cateto2 e hipotenusa. Este é um
exemplo de computação por forãa bruta. Isso não é esteticamente atraente para muitas pessoas. Mas
existem muitos motivos para essas técnicas serem importantes. Como você descobrir à mais adiante no
Curso de Ciência da Computação, existem inúmeros problemas interessantes para os quais não existe
uma técnica algorítmica conhecida além da simples força bruta. */

#include <stdio.h>

int main() {

    int cat1, cat2, hip, count = 0;

    for (cat1 = 1; cat1 <= 500; cat1++) {
        for (cat2 = 1; cat2 <= 500; cat2++) {
            for (hip = 1; hip <= 500; hip++) {
                if (cat1*cat1+cat2*cat2 == hip*hip) {
                    count++;
                    printf("%d (%d, %d, %d)\n", count, cat1, cat2, hip);
                }
            }
        }
    }

    printf("Total de triplas encontradas: %d\n", count);

    return 0;
}