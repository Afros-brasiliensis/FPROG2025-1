#include <stdio.h>

int main(){
  float preco_litro, valor_reais, qnt_litros;

  printf("Qual o preco do litro em R$? ");
  scanf("%f", &preco_litro);

  printf("Quanto dinheiro voce tem para abastecer? ");
  scanf("%f", &valor_reais);

  qnt_litros = valor_reais / preco_litro;

  printf("A quantidade de litros que foi possivel abastecer em litros e %.2f L", qnt_litros);

  return 0;
}