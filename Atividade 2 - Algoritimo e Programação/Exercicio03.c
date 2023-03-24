#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Números iguais\n");
    } else {
        int maior, menor;

        // encontra o maior número
        if (num1 > num2 && num1 > num3) {
            maior = num1;
        } else if (num2 > num3) {
            maior = num2;
        } else {
            maior = num3;
        }

        // encontra o menor número
        if (num1 < num2 && num1 < num3) {
            menor = num1;
        } else if (num2 < num3) {
            menor = num2;
        } else {
            menor = num3;
        }

        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
    }

    return 0;
}