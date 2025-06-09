#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

    int num_max = 10;

  int num_min = -10;

  double num = rand() % (num_max - num_min + 1) + num_min;

  double num_sorteado = num / 10.0;


  printf("O numero sorteado eh: %.1lf\n", num_sorteado);
  }