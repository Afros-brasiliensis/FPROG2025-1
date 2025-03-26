#include <stdio.h>

int main(){
  int a, b, c, d, e, f, g, h, i, j;

  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("Enter the third number: ");
  scanf("%d", &c);
  printf("Enter the fourth number: ");
  scanf("%d", &d);
  printf("Enter the fifth number: ");
  scanf("%d", &e);
  printf("Enter the sixth number: ");
  scanf("%d", &f);
  printf("Enter the seventh number: ");
  scanf("%d", &g);
  printf("Enter the eighth number: ");
  scanf("%d", &h);
  printf("Enter the ninth number: ");
  scanf("%d", &i);
  printf("Enter the tenth number: ");
  scanf("%d", &j);

  if (a >= 2 && a < 10) {
    printf("Este numero pertence ao intervalo\n\n");
  }

  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (b >= 5 && b < 15) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (c >= 3 && c < 12) {
    printf("Este numero pertence ao intervalo\n\n");
  }

  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (d >= 0 && d < 8) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (e >= 7) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (f <= 4) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (g >= 1 && g < 5 || g >= 10 && g < 15) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (h <= -2) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (i >= 0) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  if (j >= -10 && j < 5) {
    printf("Este numero pertence ao intervalo\n\n");
  }
  else {
    printf("Este numero nao pertence ao intervalo\n\n");
  }


  return 0;
  }