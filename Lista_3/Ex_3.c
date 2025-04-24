#include <stdio.h>

int main()
{
  int num1, numfinal;
  printf("Informe um numero: ");
  scanf("%d", &num1);

  if (num1 > 0) {
      numfinal = num1 * 2;
      printf("O numero final eh %d", numfinal);
      }
  else{
    numfinal = num1 * 3;
    printf("O numero final eh %d", numfinal);
    }

    return 0;

    }

