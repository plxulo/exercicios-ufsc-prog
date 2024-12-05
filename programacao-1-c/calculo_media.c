/*
Elabore uma função que receba três notas de um aluno como parâmetro e uma letra.
Se a letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a
letra for ‘P’, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média
calculada para o programa principal
*/
#include <stdio.h>

float calcularMedia(float n1,float n2,float n3,char tipoMedia) {
    if(tipoMedia == 'A') {
        return (n1+n2+n3)/3;
    }else if(tipoMedia == 'P') {
        return ((n1*5)+(n2*3)+(n3*2))/10;
    }
}

int main() {
    int i;
    float notas[3]; // 0, 1, 2
    char tipoMedia;
    
    for(i=0;i<3;i++){
        printf("Informe a %i nota: ", i+1);
        scanf("%f",&notas[i]);
    }
    
    printf("\nNotas:\n");
    for(i=0;i<3;i++){
        printf("%.2f ", notas[i]); // Imprimir notas do vetor com duas casas decimais .2f!
    }
    
    printf("\n\nCalcular média! SELECIONE:\n'A': Média Aritmética\n'P': Média Ponderada\n\n");
    do {
        // espaço antes de %c para ignorar \n
        scanf(" %c", &tipoMedia);
        if (tipoMedia != 'A' && tipoMedia != 'P') {
            printf("\nPor favor, selecione 'A' ou 'P'.\n");
        }
    } while(tipoMedia != 'A' && tipoMedia != 'P');
    printf("\nVocê selecionou: %c\n", tipoMedia);
    
    printf("Média: %f",calcularMedia(notas[0],notas[1],notas[2],tipoMedia));
    return 0;
}