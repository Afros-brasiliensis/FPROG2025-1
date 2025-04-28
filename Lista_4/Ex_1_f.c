#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int contador = 1, numeros_pares = 0, numeros_impares = 0;
  float numero;

  printf("Digite 10 numeros: \n");

  while (contador <= 10){
    printf("Numero %d: ", contador);
    scanf("%f", &numero);

  if ((int)numero % 2 == 0){
      numeros_pares ++;}
  else{
    numeros_impares ++;
  }
  contador ++;
  }
  printf("A quantidade de numeros impares e: %d\n", numeros_impares);
  printf("A quantidade de numeros pares e: %d\n", numeros_pares);

  return 0;
  }

