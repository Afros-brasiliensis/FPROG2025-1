#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
  char repetir;

  do {
    int numero;
    bool entrada_valida = false;

    // Validação do número
    do {
      printf("Digite um numero de 1 a 9:\n");
      scanf("%d", &numero);

      if (numero < 1 || numero > 9) {
        printf("Numero invalido\n\n");
      } else {
        entrada_valida = true;
      }

      // Limpa o buffer de entrada
      while (getchar() != '\n');

    } while (!entrada_valida);

    // Tabuada
    for (int i = 0; i < 10; i++) {
      printf("%d * %d = %d\n", numero, i, numero * i);
    }

    // Validação para repetir
    bool resposta_valida;
    do {
      printf("Deseja repetir? (S/N)\n");
      scanf(" %c", &repetir);  // Espaço antes do %c para ignorar whitespace
      repetir = toupper(repetir);

      if (repetir != 'S' && repetir != 'N') {
        printf("Opcao invalida\n");
        resposta_valida = false;
      } else {
        resposta_valida = true;
      }

      // Limpa o buffer de entrada
      while (getchar() != '\n');

    } while (!resposta_valida);

  } while (repetir == 'S');

  printf("Obrigado por participar");

  return 0;
}