#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int contador = 1;
  float numero, soma = 0, media;

  printf("Digite 15 numeros: \n");

  while (contador <= 15){
    printf("Numero %d: ", contador);
    scanf("%f", &numero);
    soma += numero;
    contador++;
  }

  media = soma / 15;

  printf("A soma dos numeros e: %.2f\n", soma);
  printf("A media dos numeros e: %.2f\n", media);

  return 0;
  }


