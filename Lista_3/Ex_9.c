#include <stdio.h>

int main() {
    float cotacao_dolar, cotacao_euro;
    int opcao;
    float valor, resultado;

    // Solicita as cotações
    printf("=== CONVERSOR DE MOEDAS ===\n");
    printf("Digite a cotacao do dolar em reais: ");
    scanf("%f", &cotacao_dolar);
    printf("Digite a cotacao do euro em reais: ");
    scanf("%f", &cotacao_euro);

    do {
        // Exibe o menu de opções
        printf("\n=== MENU DE CONVERSAO ===\n");
        printf("1) Converter de Real para Euro\n");
        printf("2) Converter de Real para Dolar\n");
        printf("3) Converter de Euro para Dolar\n");
        printf("4) Converter de Euro para Real\n");
        printf("5) Converter de Dolar para Euro\n");
        printf("6) Converter de Dolar para Real\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch(opcao) {
                case 1: // Real para Euro
                    resultado = valor / cotacao_euro;
                    printf("R$ %.2f = € %.2f\n", valor, resultado);
                    break;
                case 2: // Real para Dólar
                    resultado = valor / cotacao_dolar;
                    printf("R$ %.2f = US$ %.2f\n", valor, resultado);
                    break;
                case 3: // Euro para Dólar
                    resultado = (valor * cotacao_euro) / cotacao_dolar;
                    printf("€ %.2f = US$ %.2f\n", valor, resultado);
                    break;
                case 4: // Euro para Real
                    resultado = valor * cotacao_euro;
                    printf("€ %.2f = R$ %.2f\n", valor, resultado);
                    break;
                case 5: // Dólar para Euro
                    resultado = (valor * cotacao_dolar) / cotacao_euro;
                    printf("US$ %.2f = € %.2f\n", valor, resultado);
                    break;
                case 6: // Dólar para Real
                    resultado = valor * cotacao_dolar;
                    printf("US$ %.2f = R$ %.2f\n", valor, resultado);
                    break;
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}