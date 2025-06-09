#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
  printf("Hello World\n\n\n");

  int A[TAM]= {1,2,3,4,5,6,7,8,9,10};

  int tamanho = sizeof(A)/sizeof(A[0]);

  int primeiro = A[0];

  int ultimo = A[tamanho-1];


  printf("O tamanho da array eh: %d\n", tamanho);
  printf("O tamanho em bytes da array eh %d\n", sizeof(A));
  printf("O tamanho da array em int eh %d\n", sizeof(A[0]));
  printf("O quinto elemento da array eh %d\n", A[4]);
  printf("Elemento de indice 3: %d\n", A[3]);
  A[8] = 99;
  A[0] = A[1] + A[2];

  for (int i = 0; i < tamanho; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }


  int B[TAM];

  for (int i = 0; i < TAM; i++) {
    B[i] = 0;
  }

}