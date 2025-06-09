#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Inicializa o gerador de números aleatórios com base no tempo atual
  srand(time(NULL));

  int vetor[10]; // Vetor principal com 10 posições
  int i;

  // Calcula o tamanho do vetor automaticamente
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  // Preenche o vetor com números aleatórios entre 10 e 90
  for (i = 0; i < 10; i++) {
    vetor[i] = 10 + rand() % (90 - 10 + 1);
  }

  // Exibe os valores gerados
  printf("Vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("%d\n", vetor[i]);
  }

  // Verifica se o número 50 está no vetor (⚠️ Aqui havia um erro no seu código)
  int encontrou = 0;
  for (i = 0; i < 10; i++) {
    if (vetor[i] == 50) {
      encontrou = 1;
      break; // Se encontrar, pode parar de procurar
    }
  }

  if (encontrou == 1) {
    printf("\nO numero 50 existe dentro do vetor\n");
  } else {
    printf("\nO numero 50 nao existe dentro do vetor\n");
  }

  // Conta quantas vezes o número 50 aparece
  int contador = 0;
  for (i = 0; i < 10; i++) {
    if (vetor[i] == 50) {
      contador++;
    }
  }
  printf("O numero 50 aparece %d vezes\n\n", contador);

  // Calcula a média dos valores do vetor
  int soma = 0;
  for (i = 0; i < 10; i++) {
    soma += vetor[i];
  }
  int mediavetores = soma / 10;
  printf("A media dos vetores eh %d\n\n", mediavetores);

  // Encontra o maior e o menor número do vetor
  int maior = vetor[0];
  int menor = vetor[0];
  for (i = 0; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }
  printf("O maior numero eh %d\n", maior);
  printf("O menor numero eh %d\n\n", menor);

  // Calcula o produto de todos os elementos
  double produto = 1;
  for (i = 0; i < 10; i++) {
    produto *= vetor[i];
  }
  printf("A soma dos vetores eh %d\n", soma);
  printf("O produto dos vetores eh %.0lf\n\n", produto);

  // Inverte o vetor
  int vetorinverso[10];
  printf("Vetor na ordem inversa:\n");
  for (i = tamanho - 1; i >= 0; i--) {
    vetorinverso[tamanho - 1 - i] = vetor[i]; // Copia invertido
    printf("%d\n", vetor[i]);
  }

  // Copia o vetor invertido para outro vetor (opcional, mas mantém a ordem inversa)
  int vetor2[10];
  printf("\nO vetor copiado na forma inversa:\n");
  for (i = 0; i < 10; i++) {
    vetor2[i] = vetorinverso[10 - i - 1];
    printf("%d\n", vetor2[i]);
  }

  // Separa os números pares e ímpares em dois vetores diferentes
  int vetorpar[10];
  int vetorimpar[10];
  int indexpar = 0;
  int indeximpar = 0;

  // Preenche os vetores de par e impar
  for (i = 0; i < 10; i++) {
    if (vetor[i] % 2 == 0) {
      vetorpar[indexpar++] = vetor[i];
    } else {
      vetorimpar[indeximpar++] = vetor[i];
    }
  }

  // Imprime os números pares
  printf("\nNumeros pares:\n");
  for (i = 0; i < indexpar; i++) {
    printf("%d\n", vetorpar[i]);
  }

  // Imprime os números ímpares
  printf("\nNumeros impares:\n");
  for (i = 0; i < indeximpar; i++) {
    printf("%d\n", vetorimpar[i]);
  }

  return 0;
}
