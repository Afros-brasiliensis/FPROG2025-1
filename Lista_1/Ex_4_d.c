#include <stdio.h>

int main()
    { float a, b, c, x, y;

    a = 5;
    b = 2;
    c = 23;
    printf("Digite o seu valor para x: ");
    scanf("%f", &x);

     y = (a * (x * x)) + (b * x) + c;
     printf("O valor de y e %.1f", y);

     return 0;
     }