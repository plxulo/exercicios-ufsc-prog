/*
Escreva um programa que peça para o usuário digitar os elementos de uma matriz
3x3 (números reais). Imprima o endereço de memória de cada elemento no mesmo
formato da matriz 3x3
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int mat[3][3];
    int num;
    
    // Ler os elementos da matriz
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o elemento da linha %i coluna %i: ", i,j);
            scanf("%i", &num);
            mat[i][j]=num;
        }
    }
    
    // Exibir os elementos da matriz
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
    
    // Exibir os endereços de memória dos elementos (&mat[linha][coluna])
    printf("\nEndereços de memória dos elementos da matriz:\n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
            printf("%p ", &mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}