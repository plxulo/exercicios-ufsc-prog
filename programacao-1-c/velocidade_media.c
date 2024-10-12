#include <stdio.h>
int main(){
  int distancia;
  float velocidade, tempo_medio, velocidade_media, distancia_metros, velocidade_metros;

  printf("Velocidade (km/h): ");
  scanf("%f", &velocidade);

  printf("Distância (km): ");
  scanf("%i", &distancia);

  distancia_metros = distancia*1000;
  velocidade_metros = velocidade/3.6;

  tempo_medio = distancia_metros/velocidade_metros;
  velocidade_media = distancia_metros/tempo_medio;
  printf("\n");
  printf("Velocidade média: %f", velocidade_media);
}