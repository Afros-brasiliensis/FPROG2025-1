#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int faces;
  int valido = 0;

  while (!valido) {
    printf("Digite a quantidade de faces para o dado. Qnt de faces disponiveis: 4, 6, 8, 10, 12, 16.");
    scanf("%d", &faces);

    switch (faces){
      case 4:
      case 6:
      case 8:
      case 10:
      case 12:
      case 16:
        valido = 1;
        break;
      default:
        valido = 0;
    }
  }
  srand(time(NULL));

  int resultado = (rand() % faces) + 1;

  printf("O resultado do dado de %d\n faces é %d\n", faces, resultado);

  return 0;
}

