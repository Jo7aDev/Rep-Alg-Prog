#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Média: %.1f\n", media);

    if (media >= 0 && media <= 3) {
        printf("Reprovado\n");
    } else if (media >= 3.1 && media <= 6.9) {
        printf("Recuperação\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    }

    return 0;
}