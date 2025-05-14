#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

  int num;

  num = -100 + (rand() % (-100 - (-1))) + (-1);

  printf("O numero sorteado eh: %d\n", num);

}