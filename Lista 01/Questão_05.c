/* Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal através da seguinte fórmula: 
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7
*/

#include <stdio.h>

int main() {
    
    float altura, peso_ideal;
    char sexo;
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu sexo (m/f): ");
    scanf(" %c", &sexo);

    if (sexo == 'm') {
        peso_ideal = 72.7*altura-58;
    } else {
        peso_ideal = 62.1*altura-44.7;
    }
    
    printf("Seu peso ideal é: %.2f\n", peso_ideal);

    return 0;
}