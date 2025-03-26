#include <stdio.h>

int main(){
  int smartphones, tablets;
  float valor_smartphones, valor_tablets, valor_final;

  printf("Quantos smartphones foram vendidos? ");
  scanf("%d", &smartphones);

  printf("Quantos tablets foram vendidos? ");
  scanf("%d", &tablets);

  valor_smartphones = smartphones * 1000.00;

  valor_tablets = tablets * 1500.00;

  valor_final = valor_smartphones + valor_tablets;

  printf("O valor total vendido em tablets e smartphones foi de %.2f\n", valor_final);

  return 0;
  }


