#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int main(){

  char f;

  srand(time(NULL));

  f = 'A' + (rand() % (90 - 65) + 1);

  printf("%c\n", f);

  return 0;
 }