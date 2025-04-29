#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char nome[50];
  char primeiro[50] = "zzz";
  char segundo[50] = "zzz";
  char terceiro[50] = "zzz";
  char quarto[50] = "zzz";
  char quinto[50] = "zzz";

  for (int i = 0; i < 5; i++) {
    printf("Digite um nome:\n");
    scanf("%s", nome);

    if (strcmp(nome, primeiro) < 0) {
      // Se o novo nome for menor que o primeiro, movemos o primeiro para o segundo
      strcpy(quinto, quarto);
      strcpy(quarto, terceiro);
      strcpy(terceiro, segundo);
      strcpy(segundo, primeiro);
      strcpy(primeiro, nome);
    } else if (strcmp(nome, segundo) < 0) {
      strcpy(quinto, quarto);
      strcpy(quarto, terceiro);
      strcpy(terceiro, segundo);
      strcpy(segundo, nome);
    } else if (strcmp(nome, terceiro) < 0) {
      strcpy(quinto, quarto);
      strcpy(quarto, terceiro);
      strcpy(terceiro, nome);
    } else if (strcmp(nome, quarto) < 0) {
      strcpy(quinto, quarto);
      strcpy(quarto, nome);
    } else if (strcmp(nome, quinto) < 0) {
      strcpy(quinto, nome);
    }
  }

    printf("Primeiro nome em ordem alfabetica: %s\n", primeiro);
    printf("Segundo nome em ordem alfabetica: %s\n", segundo);
    printf("Terceiro nome em ordem alfabetica: %s\n", terceiro);
    printf("Quarto nome em ordem alfabetica: %s\n", quarto);
    printf("Quinto nome em ordem alfabetica: %s\n", quinto);

    return 0;

}
