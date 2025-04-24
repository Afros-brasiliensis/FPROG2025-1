#include <stdio.h>

int main(){
  float A, B, C;
  printf("Insira o primeiro valor: ");
  scanf("%f", &A);

  printf("Insira o segundo valor: ");
  scanf("%f", &B);

  printf("Insira o terceiro valor: ");
  scanf("%f", &C);

  if ((A + B) < (A + C)){
    printf("A soma de %.1f e %.1f e menor que a soma de %.1f e %.1f", A, B, A, C);
    }
  else if ((A + B) == (A + C)) {
    printf("As somas de %.1f e %.1f, e %.1f e %.1f sao iguais", A, B, A, C);
  }
    else{
      printf("A soma de %.1f e %.1f e maior que a soma de %.1f e %.1f", A, B, A, C);}

    return 0;

  }

