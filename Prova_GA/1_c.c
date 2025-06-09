#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

  int num = -50 + rand() % (50 - (-50)) + 1;

  printf("O numero sorteado eh: %d\n", num);
  }