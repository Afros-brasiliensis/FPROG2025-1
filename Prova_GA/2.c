#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int base;
  int expoente;
  float resultado;
  int i = 1;
  int y;

  printf("Digite o numero da base da potencia:\n ");
  scanf("%d", &base);

  printf("Digite o numero do expoente da potencia:\n ");
  scanf("%d", &expoente);

    y = base;


       for( int g = 1; g < expoente; g++){
        y = (y * base);
        resultado = y;
       }
       if (expoente == 0){
          resultado = 1;
       }
       if (expoente < 0) {
           for (int g = -1; g > expoente; g--)
            y = (y * base);
           resultado = 1.0 / y;

           }
    printf("O resultado eh %.2f", resultado);





  printf("O resultado é %.3f", resultado);

  return 0;
}