/*
Escreva um programa em C que peça ao usuário para digitar dois valores inteiros.
Imprima o conteúdo do maior endereço.
*/
#include <stdio.h>
int main() {
    int x, y, *px, *py;

    printf("Informe dois valores:\n");
    scanf("%i %i", &x, &y);

    px = &x; // px aponta para o endereço de x
    py = &y; // py aponta para o endereço de y

    if (px > py) {
        printf("Endereço X (%p) > Endereço Y (%p), conteúdo: %i\n", px, py, *px);
    } else {
        printf("Endereço Y (%p) > Endereço X (%p), conteúdo: %i\n", py, px, *py);
    }

    return 0;
}