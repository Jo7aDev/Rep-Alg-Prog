/*
QUESTÃO 1

Desenvolva um algoritmo em C, que leia dois números inteiros e possua macros que realize as seguintes
operações matemáticas: Somar, Subtrair, Dividir e Multiplicar.
*/

#include <stdio.h>

#define SOMA(a, b) (a + b)
#define SUBTRACAO(a, b) (a - b)
#define DIVISAO(a, b) (a / b)
#define MULTIPLICACAO(a, b) (a * b)

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("A soma de %d e %d e: %d\n", num1, num2, SOMA(num1, num2));
    printf("A subtracao de %d por %d e: %d\n", num1, num2, SUBTRACAO(num1, num2));
    printf("A divisao de %d por %d e: %d\n", num1, num2, DIVISAO(num1, num2));
    printf("A multiplicacao de %d por %d e: %d\n", num1, num2, MULTIPLICACAO(num1, num2));
    return 0;
}