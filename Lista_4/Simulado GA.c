#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>


int main(){

  srand(time(NULL));

  int a;

  a = rand() % (670 - 130 + 1) + 130;

  printf("%d\n", a);
}

