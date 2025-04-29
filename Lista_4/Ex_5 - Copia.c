#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int alunos, i;
  double nota_GA, nota_GB;

  printf("Quantos alunos terao suas notas calculadas?\n");
  scanf("%d", &alunos);

  for (i = 0; i < alunos; i++){
    do{
      printf("Digite a nota do Grau A\n:");
      scanf("%lf", &nota_GA);

      printf("Digite a nota do Grau B\n:");
      scanf("%lf", &nota_GB);

      if (nota_GA < 0 || nota_GA > 10 || nota_GB < 0 || nota_GB > 10){
        printf("Nota invalida\n");
      }

    } while (nota_GA < 0 || nota_GA > 10 || nota_GB < 0 || nota_GB > 10);

  }
}