#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

  int n = 0;
  int numeros, soma;

  printf("Quantos numeros deseja somar? \n");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    printf("Digite um numero: \n");
    scanf("%d", &numeros);
    soma += numeros;
  }
  printf("A soma dos numeros digitados eh: %d\n", soma);
}