#include <stdio.h>

int main()
    {
  int num1, num2;
  float num3;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num2 == 0){
    printf("Divisao nao permitida");}
  else {
    printf("Divisao permitida\n");
    num3 = num1 / num2;
    printf("Numero dividido: %.1f\n", num3);
  }

  return 0;
  }



