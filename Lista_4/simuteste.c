#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));

  int c;

  c = rand() % (10 - (-10) + 1) + (-10);

  printf("%d\n", c);

  return 0;
  }