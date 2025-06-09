#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

  int divisor, inicio, fim;
  int i;

  printf("Digite o numero para ser o divisor:\n");
  scanf("%d", &divisor);

  printf("Digite o numero do inicio do intervalo:\n");
  scanf("%d", &inicio);

  printf("Digite o numero do fim do intervalo:\n");
  scanf("%d", &fim);

  printf("Os numeros divisiveis por %d entre %d e %d sao:\n", divisor, inicio, fim);

  for (i=inicio; i<=fim; i++){
    if (i%divisor==0){
      printf("%d\n", i);
    }
  }

  printf("\n");

  return 0;

  }
