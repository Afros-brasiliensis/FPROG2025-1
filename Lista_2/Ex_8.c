#include <stdio.h>

int main(){
  float celsius, fahrenheit;

  printf("Digite a temperatura desejada em celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius*9/5)+32;

  printf("A temperatura %.2f °C em fahrenheit e %.2f\n °F", celsius, fahrenheit);

  return 0;
  }