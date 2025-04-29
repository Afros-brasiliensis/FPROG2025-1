#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main() {
  int i, num, maior = -1, menor = 101, soma = 0;
  float media;

  srand(time(NULL));

  for (i=0; i<5; i++){

    num = rand() % 100 + 1;
    printf("%d\n", num);

    if (num > maior) {
      maior = num;
    }
    if (num < menor) {
      menor = num;
    }
    soma += num;
  }
  printf("O maior numero sorteado eh %d\n", maior);
  printf("O menor numero sorteado eh %d\n", menor);
  media = soma / 5;
  printf("A media dos numeros sorteados eh %.2f\n", media);
  printf("A soma dos numeros sorteados eh %d\n", soma);
  return 20;
}