/*
QUESTÃO 2

Elabora um programa em C, que possua uma função recursiva que calcule o fatorial dos números no
intervalo 30 a 33.
*/

#include <stdio.h>

long int fatorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main() {
    int i;
    for (i = 30; i <= 33; i++) {
        printf("%d! = %ld\n", i, fatorial(i));
    }
    return 0;
}