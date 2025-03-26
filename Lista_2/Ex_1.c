#include <stdio.h>

int main()
{
  float segundos, minutos;

  printf("Insira o tempo em minutos: ");
  scanf("%f", &minutos);

  segundos = minutos * 60;

  printf("Tempo em minutos: %.2f\n", segundos);

  return 0;
  }
