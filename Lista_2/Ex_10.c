#include <stdio.h>

int main(){
  int camisetas, calcas, cintos;
  float valor_camisetas, valor_calcas, valor_cintos, desconto, valor_total, valor_total_final;

  printf("Quantas camisetas foram compradas? ");
  scanf("%d", &camisetas);

  printf("Quantas calcas foram compradas? ");
  scanf("%d", &calcas);

  printf("Quantos cintos foram comprados? ");
  scanf("%d", &cintos);

  valor_camisetas = camisetas * 25.00;

  valor_calcas = calcas * 100.00;

  valor_cintos = cintos * 40.00;

  valor_total = valor_camisetas + valor_calcas + valor_cintos;

  desconto = (valor_total * 10) / 100;

  valor_total_final = valor_total - desconto;

  printf("O valor total final e de R$ %.2f \n", valor_total_final);

  return 0;
  }

