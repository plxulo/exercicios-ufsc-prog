#include <stdio.h>

int main() {
  int nMat;
  float ntA;
  char nmA[45], SX[20];

  printf("Nome: ");
  scanf("%s", &nmA);
  fgets(nmA, sizeof(nmA), stdin);

  printf("Matrícula: ");
  scanf("%i", &nMat);

  printf("Gênero: ");
  scanf("%s", &SX);

  printf("Nota: ");
  scanf("%f", &ntA);

  printf("Nome do aluno: %s \n", nmA);
  printf("Matrícula: %i \n", nMat);

  return 0;
}