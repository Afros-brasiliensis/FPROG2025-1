#include <stdio.h>

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    int opcao;
    float x, y;

    do {
        printf("\nCalculadora:\n");
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois números: ");
            scanf("%f %f", &x, &y);
        }

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", somar(x, y)); break;
            case 2: printf("Resultado: %.2f\n", subtrair(x, y)); break;
            case 3: printf("Resultado: %.2f\n", multiplicar(x, y)); break;
            case 4:
                if (y != 0)
                    printf("Resultado: %.2f\n", dividir(x, y));
                else
                    printf("Erro: divisão por zero!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
