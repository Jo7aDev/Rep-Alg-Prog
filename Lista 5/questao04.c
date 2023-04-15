/*
QUESTÃO 4

Elabore um programa em C, que leia nome e idade e possua macros que eixba mensagens “Maior de Idade”
e/ou menor de idade.
>= 18 anos - Para Maior de Idade
< 18 anos - Para Menor de Idade
*/

#include <stdio.h>

#define MAIOR_IDADE(idade) idade >= 18 ? "Maior de Idade" : "Menor de Idade"

int main() {
    char nome[100];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("%s\n", MAIOR_IDADE(idade));

    return 0;
}