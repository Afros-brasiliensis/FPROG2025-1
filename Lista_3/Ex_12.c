#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
  int categoria = 0;

  do {
    printf("De qual categoria voce eh:\n 1 - Entre 5 e 7 anos\n 2 - Entre 8 e 10 anos\n 3 - Entre 11 e 13 anos\n 4 - Entre 14 e 17 anos\n 5 - Maior de 18 anos\n");
    scanf("%d", &categoria);

    if (categoria < 1 || categoria > 5) {
      printf("Opcao invalida\n\n");
    }
  }
  while (categoria < 1 || categoria > 5);

  switch (categoria) {
    case 1:
      printf("Sua categoria eh infantil A");
      break;
    case 2:
      printf("Sua categoria eh infantil B");
      break;
    case 3:
      printf("Sua categoria eh Juvenil A");
      break;
    case 4:
      printf("Sua categoria eh Juvenil B");
      break;
    case 5:
      printf("Sua categoria eh senior");
      break;
  }

  return 0;

}
