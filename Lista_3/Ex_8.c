#include <stdio.h>

int main() {
    float produto, lucro;
    int venda;

    // Loop para validar a entrada (deve ser maior que zero)
    do {
        printf("Digite o valor do produto (maior que zero): ");
        scanf("%f", &produto);

        if (produto <= 0) {
            printf("Valor invalido! ");
        }
    } while (produto <= 0);

    // Determina a categoria do produto
    if (produto < 20) {
        venda = 1;
    }
    else if (produto <= 50) {
        venda = 2;
    }
    else {
        venda = 3;
    }

    switch (venda) {
        case 1:
            lucro = produto * 0.45;
        printf("Lucro de 45%%. Valor do lucro: R$ %.2f\n", lucro);
        break;

        case 2:
            lucro = produto * 0.35;
        printf("Lucro de 35%%. Valor do lucro: R$ %.2f\n", lucro);
        break;

        case 3:
            lucro = produto * 0.25;
        printf("Lucro de 25%%. Valor do lucro: R$ %.2f\n", lucro);
        break;
    }

    return 0;
}