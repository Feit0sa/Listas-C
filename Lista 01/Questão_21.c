/* A linguagem C pode representar letras maiúsculas, letras minúsculas e uma grande variedade de
símbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.
O conjunto de caracteres que um computador utiliza e as representações dos números inteiros corres-
pondentes àqueles caracteres é chamado conjunto de caracteres do computador. Você pode imprimir
o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução 
printf("%d", 'A')
Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas, letras
minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espaço em branco.*/

#include <stdio.h>

int main() {
    
    printf("%d\n", 'A');
    printf("%d\n", 'B');
    printf("%d\n", 'C');
    printf("%d\n", 'a');
    printf("%d\n", 'b');
    printf("%d\n", 'c');
    printf("%d\n", '0');
    printf("%d\n", '1');
    printf("%d\n", '2');
    printf("%d\n", '$');
    printf("%d\n", '*');
    printf("%d\n", '+');
    printf("%d\n", '/');
    printf("%d\n", ' ');
    
    return 0;
}