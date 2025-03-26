#include <stdio.h>

int main()
    {
  float peso_prato, preco_quilo, valor_prato;

  preco_quilo = 40.00;

  printf("Qual peso do prato em Kg? ");
  scanf("%f", &peso_prato);

  valor_prato = peso_prato * preco_quilo;

  printf("O valor total do prato e R$%.2f", valor_prato);

  return 0;
  }
