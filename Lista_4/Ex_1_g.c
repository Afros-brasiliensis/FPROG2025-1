#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(){

  int i, num, positivos = 0, negativos = 0;

  srand(time(NULL));

  for(int i=0; i<=20; i++){
  num = (rand() % 21) - 10;

  if(num > 0){
    printf("Positivo: %d\n", num);
    positivos++;
  }
  else if(num < 0){
    printf("Negativo: %d\n", num);
    negativos++;
  }
  else{
    printf("Nulo: %d\n", num);
    }
}
printf("Quantidade de numeros positivos: %d\n", positivos);
printf("Quantidade de numeros negativos: %d\n", negativos);

return 0;
}

