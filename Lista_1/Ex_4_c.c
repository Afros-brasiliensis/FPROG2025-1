#include <stdio.h>

int main()
{ float tempo1, tempo2, velo1, velo2, distancia_total;

  tempo1 = 2;
  velo1 = 12;
  tempo2 = 3;
  velo2 = 18;

  distancia_total = (tempo1 * velo1) + (tempo2 * velo2);

  printf("A distancia total percorrida e de  %.1f km/h", distancia_total);

  return 0;}