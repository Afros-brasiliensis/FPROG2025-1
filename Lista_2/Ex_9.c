#include <stdio.h>

int main(){
  float valor_compra, desconto, valor_final;

  printf("Digite o valor da compra: ");
  scanf("%f", &valor_compra);

  desconto = (valor_compra * 15) / 100;

  valor_final = valor_compra - desconto;

  printf("O valor final da compra apos o desconto de 15 porcento e %.2f\n", valor_final);

  return 0;
  }