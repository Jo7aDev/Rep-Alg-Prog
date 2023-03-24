#include <stdio.h>

int main() {
    float salario, prestacao, limite;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    limite = salario * 0.2;

    if (prestacao > limite) {
        printf("Empréstimo não concedido\n");
    } else {
        printf("Empréstimo concedido\n");
    }

    return 0;
}