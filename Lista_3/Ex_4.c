#include <stdio.h>

int main()
    {
  int num1;

  printf("Informe um numero: ");
  scanf("%d", &num1);

  if (num1 % 3 == 0){
    printf("O numero %d e divisivel por 3", num1);}
  else{
    printf("O numero %d nao e divisivel por 3", num1);}

  return 0;

  }