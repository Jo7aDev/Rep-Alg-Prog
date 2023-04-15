/*
QUESTÃO 3

Desenvolva um algoritmo em C, que leia quatro números inteiros e possua macros que calcule a média dos
números.
*/

#include <stdio.h>

#define SOMA(x, y, z, w) (x + y + z + w)
#define MEDIA(s) (s / 4.0)

int main() {
    int num1, num2, num3, num4;
    float media;

    printf("Digite quatro números inteiros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    media = MEDIA(SOMA(num1, num2, num3, num4));

    printf("A média dos números é: %.2f\n", media);

    return 0;
}