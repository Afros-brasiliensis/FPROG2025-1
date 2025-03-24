#include <stdio.h>

int main()
{   float produto, imposto, desconto, valor_final;
    printf("Digite o valor do seu produto: ");
    scanf("%f", &produto);

    imposto = (produto * 10) / 100;

    desconto = 5;

    valor_final = produto + imposto - desconto;

    printf("O valor final do produto é: %.2f\n", valor_final);

    return 0;
  }