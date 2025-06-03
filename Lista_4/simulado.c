#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

  double d;

  d = 10.5 + (rand() % (int)((50.2 - 10.5) * 10 + 1)) * 0.1;

  printf("%.1lf\n", d);

  return 0;
  }