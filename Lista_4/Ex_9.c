#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  int num;
  char caractere;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  printf("Digite um caractere:\n");
  scanf(" %c", &caractere);

  for (int i=1; i<=num; i++){
    for (int j=1; j<=i; j++) {
      printf(" %c", caractere);
    }
    printf("\n");
  }
  return 0;
}