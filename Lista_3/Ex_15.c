#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
  float produto;
  float valor_final;

  printf("Qual o valor a ser pago pelo produto?\n");
  scanf("%f", &produto);

  int condicao_pagamento = 0;

  printf("Qual a condicao de pagamento?\n");
  printf("Digite (1) para a vista em dinheiro (15% de desconto)\n");
  printf("Digite (2) para a vista no cartao de credito (10% de desconto)\n");
  printf("Digite (3) para 2 vezes no cartao de credito (preco comum da etiqueta)\n");
  printf("Digite (4) para 3 vezes no cartao de credito (10% de juros)\n");
  scanf("%d", &condicao_pagamento);

  switch(condicao_pagamento){
      float desconto;
      float juros;
    case 1:
      desconto = (produto * 15) / 100;
      valor_final = produto - desconto;
      printf("O valor final do produto com essa condicao de pagamento e %.2f\n", valor_final);
      break;

    case 2:
      desconto = (produto * 10) / 100;
      valor_final = produto - desconto;
      printf("O valor final do produto com essa condicao de pagamento e %.2f\n", valor_final);
      break;

    case 3:
      valor_final = produto;
      printf("O valor final do produto com essa condicao de pagamento e %.2f\n", valor_final);
      break;

    case 4:
    juros = (produto * 10) / 100;
    valor_final = produto + juros;
    printf("O valor final com essa condicao de pagamento e %.2f\n", valor_final);
    break;
  }
  }