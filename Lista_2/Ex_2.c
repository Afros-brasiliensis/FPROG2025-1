#include <stdio.h>

int main(){
    float reais, dolares, cotacao_dolar;
    printf("Digite o valor a ser convertido em reais: ");
    scanf("%f %f", &reais, &cotacao_dolar);

    dolares = reais * cotacao_dolar;

    printf("A quantidade em R$%.2f e em dolares e $%.2f", reais, dolares);

    return 0;
}