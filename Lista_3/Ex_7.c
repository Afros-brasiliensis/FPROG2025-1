
#include <stdio.h>

int main() {
  float salario, desconto, salario_final;
  const float teto_desconto = 318.20f;


    printf("Digite o salario: ");
    scanf("%f", &salario);


    desconto = salario * 0.11;

    if (desconto > teto_desconto) {
      desconto = teto_desconto;}


    salario_final = salario - desconto;

    printf("O salario final é %.2f\n", salario_final);


  return 0;
  }

