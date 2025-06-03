#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

int main() {
  int num;
  int contador = 0;
  int contador_1 = 0;
  int contador_2 = 0;
  int contador_3 = 0;
  int contador_4 = 0;


  do{
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    contador++;

    if (num > 0){
      contador_1++;
    }
    if (num < 0){
      contador_2++;
    }
    if (num % 2 == 0){
      contador_3++;
    }
    if (num % 5 == 0){
      contador_4++;
    }
  }while(num != 0);

  float porcentagem_positivos = (float)(contador_1 * 100) / contador;
  float porcentagem_negativos = (float)(contador_2 * 100) / contador;
  float porcentagem_divisiveis2 = (float)(contador_3 * 100) / contador;
  float porcentagem_divisiveis5 = (float)(contador_4 * 100) / contador;

  printf("A porcentagem de numeros positivos e %.2f\n", porcentagem_positivos);
  printf("A porcentagem de numeros negativos e %.2f\n", porcentagem_negativos);
  printf("A porcentagem de numeros divisiveis por 2 e %.2f\n", porcentagem_divisiveis2);
  printf("A porcentagem de numeros divisiveis por 5 e %.2f\n", porcentagem_divisiveis5);


  return 0;
      }


