#include <stdio.h>

int main()
    {
  float  nota_A, nota_B, peso_A, peso_B, media_final;
    printf("Digite a nota do grau A: ");
    scanf("%f", &nota_A);
    printf("Digite a nota do grau B: ");
    scanf("%f", &nota_B);

    peso_A = 1.0/3.0;
    peso_B = 2.0/3.0;

    media_final = (nota_A * peso_A) + (nota_B * peso_B);

    printf("A media final e %.1f", media_final);

    return 0;

  }