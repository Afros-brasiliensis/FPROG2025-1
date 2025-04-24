#include <stdio.h>

float calcular_idade(int idade){
  if (idade < 10){
    return 100.0;
  } else if (idade >= 30){
    return 220.0;
  } else if (idade >= 60){
    return 395.0;
  } else if (idade > 60){
    return 480.0;
  }
  return 0.0;
}

int main(){
  int num_dependentes, idade, i;
  float valor_total = 300.0;

  do{
    printf("Informe o numero de dependentes: \n");
    scanf("%d", &num_dependentes);

    if (num_dependentes < 0){
      printf("Numero invalido!\n");
    }
    }
    while (num_dependentes < 0);

  
    }
