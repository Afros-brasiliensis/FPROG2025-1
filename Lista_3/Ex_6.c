#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char escolha;
  int jogador, computador, soma;

  srand(time(NULL));

  printf("=== Jogo Par ou Impar ===\n");

  printf("Voce aposta em Par (p) ou Impar (i)? ");
  scanf(" %c", &escolha);

  printf("Digite um numero de 0 a 5: ");
  scanf("%d", &jogador);

  if(jogador < 0 || jogador > 5) {
    printf("Numero invalido! Deve ser entre 0 e 5.\n");
    return 18;
  }

  computador = rand() % 6;
  printf("O computador escolheu: %d\n", computador);

  soma = jogador + computador;
  printf("Soma: %d\n", soma);

  if((soma % 2 == 0 && escolha == 'p') || (soma % 2 != 0 && escolha == 'i')) {
    printf("Voce venceu!\n");
  } else {
    printf("O computador venceu!\n");
  }

  return 0;

}