#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  srand(time(NULL));
  int num = 1 + (rand() % 100) + 1;

  printf("O numero sorteado eh: %d\n", num);
  }